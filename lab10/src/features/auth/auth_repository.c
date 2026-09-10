/**
 * @file auth_repository.c
 * @brief In-memory AuthRepository adapter implementation.
 *
 * Stores users in a fixed-size array (bounded, deterministic memory —
 * no dynamic allocation per the production-readiness note). Seeds the
 * three demo users required by L1005/L10O01.
 */

#include "auth_repository.h"

#include <stdlib.h>
#include <string.h>

/**
 * Concrete repository state. The use case never sees this struct
 * directly — it only holds an AuthRepository whose vtable points here.
 * This enforces the dependency-inversion rule: the use case depends
 * on the port, not the concrete adapter.
 */
typedef struct {
    AuthRepository base;
    User    users[AUTH_REPO_CAPACITY];
    int     count;
} InMemoryAuthRepository;

/** The single shared vtable for this adapter. */
static const AuthRepositoryVTable g_vtable = {
    .find_by_username = auth_repository_find_by_username,
    .save             = auth_repository_save,
    .count_active     = auth_repository_count_active,
    .destroy          = auth_repository_destroy,
};

static bool valid_user_record(const User *user) {
    if (user == NULL || (user->role != ROLE_USER &&
                         user->role != ROLE_ADMIN)) {
        return false;
    }

    size_t username_len = strnlen(user->username,
                                  CONFIG_MAX_USERNAME_LEN + 1);
    size_t password_len = strnlen(user->password,
                                  CONFIG_MAX_PASSWORD_LEN + 1);
    return username_len > 0 && username_len <= CONFIG_MAX_USERNAME_LEN &&
           password_len <= CONFIG_MAX_PASSWORD_LEN;
}

static void secure_zero(void *memory, size_t size) {
    volatile unsigned char *bytes = (volatile unsigned char *)memory;
    while (size-- > 0) {
        *bytes++ = 0;
    }
}

static void seed_user(InMemoryAuthRepository *repo,
                      const char *uname, const char *pw, UserRole role) {
    if (repo == NULL || uname == NULL || pw == NULL) {
        return;
    }
    if (repo->count >= AUTH_REPO_CAPACITY) {
        return;
    }
    User *u = &repo->users[repo->count];
    strlcpy(u->username, uname, sizeof(u->username));
    strlcpy(u->password, pw, sizeof(u->password));
    u->role = role;
    u->active = true;
    repo->count++;
}

AuthRepository *auth_repository_create(void) {
    InMemoryAuthRepository *repo =
        (InMemoryAuthRepository *)malloc(sizeof(InMemoryAuthRepository));
    if (repo == NULL) {
        return NULL;
    }
    memset(repo, 0, sizeof(*repo));
    repo->base.vtable = &g_vtable;
    repo->count = 0;

    /** Seed the three demo users per L1005/L10O01 spec. */
    seed_user(repo, "admin", "admin", ROLE_ADMIN);
    seed_user(repo, "user1", "1234", ROLE_USER);
    seed_user(repo, "user2", "5678", ROLE_USER);

    return &repo->base;
}

Result auth_repository_find_by_username(AuthRepository *repo,
                                        const char *username, User *out) {
    if (repo == NULL || username == NULL || out == NULL) {
        return result_error(ERR_INVALID_INPUT,
                            "find_by_username: null argument");
    }
    InMemoryAuthRepository *impl = (InMemoryAuthRepository *)repo;
    for (int i = 0; i < impl->count; i++) {
        if (strcmp(impl->users[i].username, username) == 0) {
            *out = impl->users[i];
            return result_ok();
        }
    }
    return result_error(ERR_USER_NOT_FOUND,
                        "find_by_username: user not found");
}

Result auth_repository_save(AuthRepository *repo, const User *user) {
    if (repo == NULL || !valid_user_record(user)) {
        return result_error(ERR_INVALID_INPUT,
                            "save: invalid user record");
    }
    InMemoryAuthRepository *impl = (InMemoryAuthRepository *)repo;

    /**
     * Find existing by username (update in place) or append (create).
     * Respect the hard capacity bound.
     */
    for (int i = 0; i < impl->count; i++) {
        if (strcmp(impl->users[i].username, user->username) == 0) {
            impl->users[i] = *user;
            return result_ok();
        }
    }
    if (impl->count >= AUTH_REPO_CAPACITY) {
        return result_error(ERR_BUFFER_OVERFLOW,
                            "save: user store at capacity");
    }
    impl->users[impl->count] = *user;
    impl->count++;
    return result_ok();
}

int auth_repository_count_active(const AuthRepository *repo) {
    if (repo == NULL) {
        return 0;
    }
    const InMemoryAuthRepository *impl = (const InMemoryAuthRepository *)repo;
    int n = 0;
    for (int i = 0; i < impl->count; i++) {
        if (impl->users[i].active) {
            n++;
        }
    }
    return n;
}

void auth_repository_destroy(AuthRepository *repo) {
    if (repo == NULL) {
        return;
    }
    /**
     * The concrete struct wraps the base, so recover the allocation
     * pointer to free it. We rely on the field layout: `base` is first.
     */
    InMemoryAuthRepository *impl = (InMemoryAuthRepository *)repo;
    /* Reduce the lifetime of plaintext demo credentials in freed memory. */
    secure_zero(impl, sizeof(*impl));
    free(impl);
}

/**
 * @file auth_service.c
 * @brief Use-case implementation for login and password reset.
 *
 * This is the "Application" ring. It knows nothing about stdin, stdout,
 * or the concrete repository — only the AuthRepository port and the
 * domain entities. That makes it fully unit-testable in isolation.
 */

#include "auth_service.h"

#include <string.h>

/**
 * Local helper: validate a new password meets rules.
 * Rule here: non-NULL and non-empty (L10O01 only requires a value).
 * A production system would enforce length/complexity.
 */
static bool bounded_nonempty(const char *value, size_t max_len) {
    if (value == NULL) {
        return false;
    }
    size_t len = strnlen(value, max_len + 1);
    return len > 0 && len <= max_len;
}

static bool password_is_valid(const char *pw) {
    return bounded_nonempty(pw, CONFIG_MAX_PASSWORD_LEN);
}

static Result bad_credentials(void) {
    return result_error(ERR_BAD_CREDENTIALS,
                        "Error Username or Password");
}

Result auth_authenticate(AuthRepository *repo,
                         const char *username, const char *password,
                         WelcomeKind *out_kind) {
    if (repo == NULL || out_kind == NULL ||
        !bounded_nonempty(username, CONFIG_MAX_USERNAME_LEN) ||
        !bounded_nonempty(password, CONFIG_MAX_PASSWORD_LEN)) {
        /* Keep login failures generic and avoid username enumeration. */
        return bad_credentials();
    }
    if (repo->vtable == NULL || repo->vtable->find_by_username == NULL) {
        return result_error(ERR_INTERNAL,
                            "authenticate: repository not wired");
    }

    User user;
    Result r = repo->vtable->find_by_username(repo, username, &user);
    if (!r.status) {
        /**
         * Map "user not found" to the same user-facing message as a
         * wrong password — prevents username enumeration (L1005 spec).
         */
        return (r.error_code == ERR_USER_NOT_FOUND) ? bad_credentials() : r;
    }
    if (!user.active) {
        return bad_credentials();
    }
    if (password[0] == '\0' ||
        !auth_password_matches(&user, password)) {
        return bad_credentials();
    }

    *out_kind = (user.role == ROLE_ADMIN) ? WELCOME_ADMIN : WELCOME_USER;
    return result_ok();
}

Result auth_change_password(AuthRepository *repo,
                            const char *admin_username,
                            const char *admin_password,
                            const char *target_name, const char *new_password) {
    if (repo == NULL ||
        !bounded_nonempty(admin_username, CONFIG_MAX_USERNAME_LEN) ||
        !bounded_nonempty(admin_password, CONFIG_MAX_PASSWORD_LEN) ||
        !bounded_nonempty(target_name, CONFIG_MAX_USERNAME_LEN) ||
        !password_is_valid(new_password)) {
        return result_error(ERR_INVALID_INPUT,
                            "change_password: invalid argument");
    }

    WelcomeKind actor_kind = WELCOME_USER;
    Result actor_result = auth_authenticate(repo, admin_username,
                                            admin_password, &actor_kind);
    if (!actor_result.status) {
        return actor_result;
    }
    if (actor_kind != WELCOME_ADMIN) {
        return result_error(ERR_BAD_CREDENTIALS,
                            "change_password: only admin may reset");
    }
    if (!password_is_valid(new_password)) {
        return result_error(ERR_INVALID_INPUT,
                            "change_password: empty password");
    }

    /** Look up the target user to mutate. */
    if (repo->vtable == NULL || repo->vtable->find_by_username == NULL ||
        repo->vtable->save == NULL) {
        return result_error(ERR_INTERNAL,
                            "change_password: repository not wired");
    }
    User target;
    Result r = repo->vtable->find_by_username(repo, target_name, &target);
    if (!r.status) {
        return (r.error_code == ERR_USER_NOT_FOUND)
                   ? result_error(ERR_USER_NOT_FOUND,
                                  "change_password: target user not found")
                   : r;
    }
    if (!target.active) {
        return result_error(ERR_USER_NOT_FOUND,
                            "change_password: target user is inactive");
    }

    /** Apply the change and persist. */
    strlcpy(target.password, new_password, sizeof(target.password));
    return repo->vtable->save(repo, &target);
}

/**
 * @file auth_tests.c
 * @brief Unit tests for the auth use-case layer (testing pyramid base).
 *
 * These tests use the real in-memory repository adapter but exercise
 * the use-case logic (auth_service) in isolation from any I/O. They
 * cover happy paths, edge cases, and error scenarios per the guide's
 * testing checklist.
 */

#include "test_runner.h"
#include "auth_repository.h"
#include "auth_service.h"
#include "auth_model.h"
#include "../shared/errors.h"

#include <string.h>

/**
 * Helper: authenticate with seeded credentials.
 */
static WelcomeKind do_login(AuthRepository *repo,
                            const char *uname, const char *pw) {
    WelcomeKind kind = WELCOME_USER;
    Result r = auth_authenticate(repo, uname, pw, &kind);
    EXPECT(r.status);
    return kind;
}

TEST(auth_login_admin_success) {
    AuthRepository *repo = auth_repository_create();
    ASSERT(repo != NULL);
    WelcomeKind kind = do_login(repo, "admin", "admin");
    EXPECT(kind == WELCOME_ADMIN);
    repo->vtable->destroy(repo);
}

TEST(auth_login_user1_success) {
    AuthRepository *repo = auth_repository_create();
    ASSERT(repo != NULL);
    WelcomeKind kind = do_login(repo, "user1", "1234");
    EXPECT(kind == WELCOME_USER);
    repo->vtable->destroy(repo);
}

TEST(auth_login_user2_success) {
    AuthRepository *repo = auth_repository_create();
    ASSERT(repo != NULL);
    WelcomeKind kind = do_login(repo, "user2", "5678");
    EXPECT(kind == WELCOME_USER);
    repo->vtable->destroy(repo);
}

TEST(auth_login_bad_password) {
    AuthRepository *repo = auth_repository_create();
    ASSERT(repo != NULL);
    WelcomeKind kind = WELCOME_USER;
    Result r = auth_authenticate(repo, "admin", "wrong", &kind);
    EXPECT(!r.status);
    EXPECT(r.error_code == ERR_BAD_CREDENTIALS);
    repo->vtable->destroy(repo);
}

TEST(auth_login_unknown_user) {
    AuthRepository *repo = auth_repository_create();
    ASSERT(repo != NULL);
    WelcomeKind kind = WELCOME_USER;
    Result r = auth_authenticate(repo, "nobody", "x", &kind);
    EXPECT(!r.status);
    EXPECT(r.error_code == ERR_BAD_CREDENTIALS);
    repo->vtable->destroy(repo);
}

TEST(auth_change_password_admin_resets_user1) {
    AuthRepository *repo = auth_repository_create();
    ASSERT(repo != NULL);
    Result r = auth_change_password(repo, "admin", "admin",
                                    "user1", "newpass");
    EXPECT(r.status);

    /** The new password must now work. */
    WelcomeKind kind = do_login(repo, "user1", "newpass");
    EXPECT(kind == WELCOME_USER);
    repo->vtable->destroy(repo);
}

TEST(auth_change_password_non_admin_forbidden) {
    AuthRepository *repo = auth_repository_create();
    ASSERT(repo != NULL);
    Result r = auth_change_password(repo, "user1", "1234",
                                    "user2", "hacked");
    EXPECT(!r.status);
    EXPECT(r.error_code == ERR_BAD_CREDENTIALS);
    repo->vtable->destroy(repo);
}

TEST(auth_change_password_missing_target) {
    AuthRepository *repo = auth_repository_create();
    ASSERT(repo != NULL);
    Result r = auth_change_password(repo, "admin", "admin",
                                    "ghost", "pw");
    EXPECT(!r.status);
    EXPECT(r.error_code == ERR_USER_NOT_FOUND);
    repo->vtable->destroy(repo);
}

TEST(auth_change_password_empty_rejected) {
    AuthRepository *repo = auth_repository_create();
    ASSERT(repo != NULL);
    Result r = auth_change_password(repo, "admin", "admin",
                                    "user1", "");
    EXPECT(!r.status);
    EXPECT(r.error_code == ERR_INVALID_INPUT);
    repo->vtable->destroy(repo);
}

TEST(auth_welcome_message_admin) {
    char buf[64];
    bool ok = auth_welcome_message(WELCOME_ADMIN, buf, (int)sizeof(buf));
    EXPECT(ok);
    EXPECT(strcmp(buf, "Welcome my lovely admin!") == 0);
}

TEST(auth_welcome_message_user) {
    char buf[64];
    bool ok = auth_welcome_message(WELCOME_USER, buf, (int)sizeof(buf));
    EXPECT(ok);
    EXPECT(strcmp(buf, "Welcome!") == 0);
}

TEST(auth_welcome_message_null_buf) {
    bool ok = auth_welcome_message(WELCOME_ADMIN, NULL, 64);
    EXPECT(!ok);
}

TEST(auth_password_matches_correct) {
    User u;
    strlcpy(u.password, "secret", sizeof(u.password));
    EXPECT(auth_password_matches(&u, "secret"));
}

TEST(auth_password_matches_wrong) {
    User u;
    strlcpy(u.password, "secret", sizeof(u.password));
    EXPECT(!auth_password_matches(&u, "nope"));
}

TEST(auth_password_max_length_suffix_rejected) {
    User u;
    memset(&u, 0, sizeof(u));
    memset(u.password, 'a', CONFIG_MAX_PASSWORD_LEN);
    u.password[CONFIG_MAX_PASSWORD_LEN] = '\0';

    char supplied[CONFIG_MAX_PASSWORD_LEN + 2];
    memset(supplied, 'a', CONFIG_MAX_PASSWORD_LEN + 1);
    supplied[CONFIG_MAX_PASSWORD_LEN + 1] = '\0';

    EXPECT(!auth_password_matches(&u, supplied));
}

TEST(auth_change_password_oversize_rejected) {
    AuthRepository *repo = auth_repository_create();
    ASSERT(repo != NULL);

    char new_password[CONFIG_MAX_PASSWORD_LEN + 2];
    memset(new_password, 'p', CONFIG_MAX_PASSWORD_LEN + 1);
    new_password[CONFIG_MAX_PASSWORD_LEN + 1] = '\0';

    Result r = auth_change_password(repo, "admin", "admin",
                                    "user1", new_password);
    EXPECT(!r.status);
    EXPECT(r.error_code == ERR_INVALID_INPUT);
    repo->vtable->destroy(repo);
}

TEST(auth_repository_seeds_three_users) {
    AuthRepository *repo = auth_repository_create();
    ASSERT(repo != NULL);
    EXPECT(repo->vtable->count_active(repo) == 3);
    repo->vtable->destroy(repo);
}

TEST(auth_repository_save_then_find) {
    AuthRepository *repo = auth_repository_create();
    ASSERT(repo != NULL);
    User newu;
    memset(&newu, 0, sizeof(newu));
    strlcpy(newu.username, "carol", sizeof(newu.username));
    strlcpy(newu.password, "pw", sizeof(newu.password));
    newu.role = ROLE_USER;
    newu.active = true;

    Result r = repo->vtable->save(repo, &newu);
    EXPECT(r.status);

    User got;
    Result fr = repo->vtable->find_by_username(repo, "carol", &got);
    EXPECT(fr.status);
    EXPECT(strcmp(got.password, "pw") == 0);
    repo->vtable->destroy(repo);
}

void auth_tests_register(void);
void auth_tests_register(void) {
    /* Auto-registered by TEST macro. */
}

/**
 * @file integration_main.c
 * @brief Composition root for the integration test binary.
 *
 * Integration tests exercise the controller + use case + real
 * repository adapter together (the guide: "hit real adapters").
 * stdin/stdout are redirected so the same binary can be run in CI.
 */

#include "config/config.h"
#include "features/auth/auth_repository.h"
#include "features/auth/auth_service.h"
#include "features/auth/auth_model.h"
#include "shared/logger.h"
#include "errors.h"

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Integration test 1: full admin login + password reset flow.
 * Seeds users, logs in as admin, resets user1's password, then
 * verifies the new password authenticates.
 */
static bool it_auth_admin_reset_flow(void) {
    logger_init(LOG_ERROR); /** quiet during tests */
    AuthRepository *repo = auth_repository_create();
    if (repo == NULL) {
        fprintf(stderr, "setup failed\n");
        return false;
    }

    /* Step 1: admin login. */
    WelcomeKind kind = WELCOME_USER;
    Result r = auth_authenticate(repo, "admin", "admin", &kind);
    if (!r.status || kind != WELCOME_ADMIN) {
        fprintf(stderr, "admin login failed\n");
        repo->vtable->destroy(repo);
        return false;
    }

    /* Step 2: admin resets user1 password. */
    Result pr = auth_change_password(repo, "admin", "admin",
                                     "user1", "brandnew");
    if (!pr.status) {
        fprintf(stderr, "password reset failed\n");
        repo->vtable->destroy(repo);
        return false;
    }

    /* Step 3: old password must fail, new password must succeed. */
    Result ro = auth_authenticate(repo, "user1", "1234", &kind);
    if (ro.status) {
        fprintf(stderr, "old password still works (bug)\n");
        repo->vtable->destroy(repo);
        return false;
    }
    Result rn = auth_authenticate(repo, "user1", "brandnew", &kind);
    if (!rn.status || kind != WELCOME_USER) {
        fprintf(stderr, "new password failed\n");
        repo->vtable->destroy(repo);
        return false;
    }

    repo->vtable->destroy(repo);
    return true;
}

/**
 * Integration test 2: bad login paths produce ERR_BAD_CREDENTIALS
 * for both unknown user and wrong password (no enumeration).
 */
static bool it_auth_bad_login_paths(void) {
    AuthRepository *repo = auth_repository_create();
    if (repo == NULL) {
        return false;
    }
    WelcomeKind kind = WELCOME_USER;

    Result r1 = auth_authenticate(repo, "ghost", "x", &kind);
    Result r2 = auth_authenticate(repo, "admin", "wrong", &kind);
    Result r3 = auth_authenticate(repo, "user1", "", &kind);

    bool ok = (!r1.status && r1.error_code == ERR_BAD_CREDENTIALS) &&
              (!r2.status && r2.error_code == ERR_BAD_CREDENTIALS) &&
              (!r3.status && r3.error_code == ERR_BAD_CREDENTIALS);

    repo->vtable->destroy(repo);
    return ok;
}

int main(void) {
    int passed = 0;
    int failed = 0;

    printf("\n=== Integration Tests ===\n");

    if (it_auth_admin_reset_flow()) {
        passed++; printf("[  PASSED  ] it_auth_admin_reset_flow\n");
    } else {
        failed++; printf("[  FAILED  ] it_auth_admin_reset_flow\n");
    }

    if (it_auth_bad_login_paths()) {
        passed++; printf("[  PASSED  ] it_auth_bad_login_paths\n");
    } else {
        failed++; printf("[  FAILED  ] it_auth_bad_login_paths\n");
    }

    printf("\n=== Integration Summary ===\n");
    printf("Passed: %d\nFailed: %d\n===\n", passed, failed);
    return (failed == 0) ? 0 : 1;
}

/**
 * @file auth_controller.c
 * @brief I/O layer: prompts, reads input, delegates to use cases, prints.
 */

#include "auth_controller.h"
#include "auth_model.h"
#include "auth_service.h"
#include "input.h"
#include "logger.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

/**
 * Read a bounded line into `buf` (cap bytes) via the safe input helper.
 * Prints `prompt` first. Returns true if a line was read.
 */
static InputStatus read_line(const char *prompt, char *buf, size_t cap) {
    printf("%s", prompt);
    fflush(stdout);
    return input_read_line(buf, cap);
}

/**
 * Render the password-reset submenu for an admin (L10O01).
 * Returns the 1-based selection index, or 0 to cancel.
 */
static int select_target_user(void) {
    printf("Select user to change password\n");
    printf("1.admin\n2.user1\n3.user2\n");
    printf("Select (1-3): ");
    fflush(stdout);

    char sel[16];
    if (input_read_line(sel, sizeof(sel)) != INPUT_OK) {
        return 0;
    }
    errno = 0;
    char *end = NULL;
    long parsed = strtol(sel, &end, 10);
    if (errno == ERANGE || end == sel || *end != '\0' ||
        parsed < 1 || parsed > 3 || parsed > INT_MAX) {
        return 0;
    }
    return (int)parsed;
}

/**
 * Map a 1-based selection to a username string.
 */
static const char *target_username(int idx) {
    switch (idx) {
        case 1: return "admin";
        case 2: return "user1";
        case 3: return "user2";
        default: return NULL;
    }
}

void auth_controller_run(AuthRepository *repo) {
    if (repo == NULL) {
        logger_log(LOG_ERROR, "auth", "controller called with null repo");
        return;
    }

    for (;;) {
        printf("LOGIN SYSTEM\n");

        char username[CONFIG_MAX_USERNAME_LEN + 1];
        char password[CONFIG_MAX_PASSWORD_LEN + 1];

        InputStatus input_status = read_line("Username: ", username,
                                             sizeof(username));
        if (input_status == INPUT_EOF) {
            logger_log(LOG_WARN, "auth", "EOF before username; exiting");
            break;
        }
        if (input_status != INPUT_OK) {
            puts("Username is too long.");
            continue;
        }

        input_status = read_line("Password: ", password, sizeof(password));
        if (input_status == INPUT_EOF) {
            logger_log(LOG_WARN, "auth", "EOF before password; exiting");
            break;
        }
        if (input_status != INPUT_OK) {
            puts("Password is too long.");
            continue;
        }

        WelcomeKind kind;
        Result r = auth_authenticate(repo, username, password, &kind);
        if (!r.status) {
            /** L1005 spec: single generic error message. */
            printf("Error Username or Password\n");
            continue;
        }

        /** Successful login: render the role-specific welcome. */
        char welcome[64];
        (void)auth_welcome_message(kind, welcome, (int)sizeof(welcome));
        printf("%s\n", welcome);

        /** Admin gets the password-reset submenu (L10O01). */
        if (kind == WELCOME_ADMIN) {
            printf("Change password for users? (y to change): ");
            fflush(stdout);
            char ans[8];
            if (input_read_line(ans, sizeof(ans)) != INPUT_OK) {
                break;
            }
            if (ans[0] == 'y' || ans[0] == 'Y') {
                int sel = select_target_user();
                if (sel == 0) {
                    printf("---RESET---\n");
                    continue;
                }
                const char *target = target_username(sel);
                char newpw[CONFIG_MAX_PASSWORD_LEN + 1];
                input_status = read_line("New Password: ", newpw,
                                         sizeof(newpw));
                if (input_status == INPUT_EOF) {
                    logger_log(LOG_WARN, "auth",
                               "input ended while reading new password");
                    break;
                }
                if (input_status != INPUT_OK) {
                    puts("Password is too long.");
                    continue;
                }

                Result pr = auth_change_password(repo, username, password,
                                                 target, newpw);
                if (!pr.status) {
                    printf("Failed to change password: %s\n",
                           error_code_label(pr.error_code));
                } else {
                    printf("---RESET---\n");
                }
                /** Loop back to a fresh login after a reset. */
                continue;
            }
            /** Admin declined reset: exit per L10O01 note. */
            break;
        }

        /** Non-admin: welcome shown, done. */
        break;
    }
}

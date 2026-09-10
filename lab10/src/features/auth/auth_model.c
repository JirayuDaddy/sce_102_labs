/**
 * @file auth_model.c
 * @brief Implementation of auth domain entities and value objects.
 */

#include "auth_model.h"

#include <string.h>

bool auth_welcome_message(WelcomeKind kind, char *out, int cap) {
    if (out == NULL || cap < 1) {
        return false;
    }
    const char *msg = (kind == WELCOME_ADMIN)
                          ? "Welcome my lovely admin!"
                          : "Welcome!";
    size_t n = strlcpy(out, msg, (size_t)cap);
    return n < (size_t)cap;
}

bool auth_password_matches(const User *user, const char *password) {
    if (user == NULL || password == NULL) {
        return false;
    }

    /* Reject unterminated/oversized strings before comparing them. */
    const size_t max = CONFIG_MAX_PASSWORD_LEN;
    size_t stored_len = strnlen(user->password, max + 1);
    size_t supplied_len = strnlen(password, max + 1);
    if (stored_len > max || supplied_len > max ||
        stored_len != supplied_len) {
        return false;
    }

    /* Avoid early-exit comparison. Production code should use a KDF library. */
    volatile unsigned char different = 0;
    for (size_t i = 0; i < stored_len; i++) {
        different |= (unsigned char)user->password[i] ^
                     (unsigned char)password[i];
    }
    return different == 0;
}

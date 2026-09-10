#ifndef SCE102_AUTH_MODEL_H
#define SCE102_AUTH_MODEL_H

/**
 * @file auth_model.h
 * @brief Domain entities and value objects for the auth feature.
 *
 * The domain is the "heart" of the application per the guide: it holds
 * business rules and depends on nothing outward. Passwords are stored
 * as plaintext here only because the lab exercises compare literal
 * strings (a demo); in real code, hash with a salted KDF.
 *
 * L1005 / L10O01: three users (admin/user1/user2) with fixed passwords;
 *   - admin  / admin  -> "Welcome my lovely admin!"
 *   - user1  / 1234   -> "Welcome!"
 *   - user2  / 5678   -> "Welcome!"
 */

#include "config.h"

#include <stdbool.h>

/** A role distinguishing privileged users. */
typedef enum {
    ROLE_USER = 0, /** Standard user.             */
    ROLE_ADMIN = 1 /** Privileged: can reset passwords. */
} UserRole;

/**
 * A domain User entity. The username is the unique identifier.
 * Passwords are compared in the use case (auth_service), not here,
 * to keep this entity behavior-focused rather than anemic.
 */
typedef struct {
    char     username[CONFIG_MAX_USERNAME_LEN + 1];
    char     password[CONFIG_MAX_PASSWORD_LEN + 1];
    UserRole role;
    bool     active; /** Whether the account is enabled. */
} User;

/**
 * A credential pair submitted for authentication. This is a value
 * object: two equal credentials are interchangeable.
 */
typedef struct {
    char username[CONFIG_MAX_USERNAME_LEN + 1];
    char password[CONFIG_MAX_PASSWORD_LEN + 1];
} Credentials;

/**
 * A welcome message result returned after successful auth, so the
 * use case can decide which message to show per role.
 */
typedef enum {
    WELCOME_ADMIN, /** "Welcome my lovely admin!" */
    WELCOME_USER  /** "Welcome!"                  */
} WelcomeKind;

/**
 * Build a welcome message string for a given kind.
 *
 * @param kind  Which welcome variant.
 * @param out   Destination buffer.
 * @param cap   Capacity of out (bytes).
 * @return true if written (always fits), false on NULL/bad args.
 */
bool auth_welcome_message(WelcomeKind kind, char *out, int cap);

/**
 * Compare a submitted password against a user's stored password.
 * (Constant-time comparison omitted for demo simplicity; documented.)
 *
 * @param user      The stored user.
 * @param password  NUL-terminated submitted password.
 * @return true if the password matches.
 */
bool auth_password_matches(const User *user, const char *password);

#endif /* SCE102_AUTH_MODEL_H */

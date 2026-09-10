#ifndef SCE102_CONFIG_H
#define SCE102_CONFIG_H

/**
 * @file config.h
 * @brief Application configuration constants and settings.
 *
 * Configuration is centralized here (never scattered as magic numbers).
 * All limits and tuning values are defined once and reused everywhere,
 * following the DRY principle and the guide's "validated config object
 * loaded at startup" rule. Adjustments to capacity only require editing
 * this file.
 */

/** Maximum length of a username (not counting the NUL terminator). */
#define CONFIG_MAX_USERNAME_LEN 32

/** Maximum length of a password (not counting the NUL terminator). */
#define CONFIG_MAX_PASSWORD_LEN 32

/** Maximum length of a general-purpose string (L1001-L1004 exercises). */
#define CONFIG_MAX_STRING_LEN 100

/** Number of characters the demo initializes in L1001. */
#define CONFIG_DEMO_NAME_LEN 5

/** Maximum number of seeded users in the in-memory user store. */
#define CONFIG_MAX_USERS 3

/** Maximum length of an error detail message. */
#define CONFIG_MAX_ERROR_LEN 256

/** Length of a user-facing prompt line buffer. */
#define CONFIG_MAX_INPUT_LEN 128

#endif /* SCE102_CONFIG_H */

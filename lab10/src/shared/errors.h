#ifndef SCE102_ERRORS_H
#define SCE102_ERRORS_H

#include <stdbool.h>

/**
 * @file errors.h
 * @brief Result type and error codes for structured error handling.
 *
 * Follows the guide's rule: distinguish domain errors (expected business
 * outcomes) from system errors (unexpected states), and return typed
 * results for expected domain failures. In C we model this with an
 * explicit `Result` status plus a detail message.
 */

/**
 * Error codes used across the application.
 *
 * Domain errors are the expected, recoverable outcomes of a use case
 * (e.g. "bad credentials"). System errors are unexpected failures.
 */
typedef enum {
    /* ---- success ---- */
    ERR_NONE = 0,

    /* ---- domain / expected failures ---- */
    ERR_BAD_CREDENTIALS,   /** Username or password did not match. */
    ERR_USER_NOT_FOUND,    /** Requested user does not exist. */
    ERR_USER_EXISTS,       /** A user with this name already exists. */
    ERR_INVALID_INPUT,     /** Caller passed an empty/null/invalid argument. */
    ERR_PASSWORD_WEAK,     /** New password failed a validation rule. */

    /* ---- system / unexpected failures ---- */
    ERR_BUFFER_OVERFLOW,   /** An internal bound was exceeded. */
    ERR_INTERNAL           /** Catch-all for unexpected internal states. */
} ErrorCode;

/**
 * A uniform result wrapper returned by operations.
 *
 * `status` is true on success, false on failure. When false, `error_code`
 * classifies the failure and `error_msg` holds a human-readable detail
 * (may be empty when the caller only cares about the code).
 */
typedef struct {
    bool     status;        /** true = success, false = failure. */
    ErrorCode error_code;   /** Classification of the failure. */
    char     error_msg[256];/** Detail message (truncated to fit). */
} Result;

/**
 * Build a success Result.
 * @return A Result with status=true and ERR_NONE.
 */
Result result_ok(void);

/**
 * Build an error Result.
 *
 * @param code   Error classification.
 * @param msg    Human-readable detail (NUL-terminated). May be NULL.
 * @return A Result with status=false carrying `code` and `msg`.
 */
Result result_error(ErrorCode code, const char *msg);

/**
 * Attach a formatted detail message to an existing error Result.
 *
 * @param r      Existing Result (assumed to be an error).
 * @param fmt    printf-style format string.
 * @param ...    Format arguments.
 * @return The mutated Result (for convenience).
 */
Result result_with_msg(Result r, const char *fmt, ...);

/**
 * Convert an ErrorCode to a short static string label.
 * @param code  The error code.
 * @return A non-NULL static label.
 */
const char *error_code_label(ErrorCode code);

#endif /* SCE102_ERRORS_H */

#include "errors.h"

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * @file errors.c
 * @brief Implementation of the Result type helpers.
 */

/**
 * Safe variadic message formatter shared by result_error / result_with_msg.
 * Writes up to sizeof(r->error_msg)-1 bytes always NUL-terminated.
 */
static void result_set_msg(Result *r, const char *fmt, va_list ap) {
    if (fmt == NULL) {
        r->error_msg[0] = '\0';
        return;
    }
    vsnprintf(r->error_msg, sizeof(r->error_msg), fmt, ap);
}

Result result_ok(void) {
    Result r;
    r.status = true;
    r.error_code = ERR_NONE;
    r.error_msg[0] = '\0';
    return r;
}

Result result_error(ErrorCode code, const char *msg) {
    Result r;
    r.status = false;
    r.error_code = code;
    if (msg == NULL) {
        r.error_msg[0] = '\0';
    } else {
        strncpy(r.error_msg, msg, sizeof(r.error_msg) - 1);
        r.error_msg[sizeof(r.error_msg) - 1] = '\0';
    }
    return r;
}

Result result_with_msg(Result r, const char *fmt, ...) {
    if (r.status) {
        return r; /** nothing to attach on success */
    }
    va_list ap;
    va_start(ap, fmt);
    result_set_msg(&r, fmt, ap);
    va_end(ap);
    return r;
}

const char *error_code_label(ErrorCode code) {
    switch (code) {
        case ERR_NONE:             return "NONE";
        case ERR_BAD_CREDENTIALS:  return "BAD_CREDENTIALS";
        case ERR_USER_NOT_FOUND:   return "USER_NOT_FOUND";
        case ERR_USER_EXISTS:      return "USER_EXISTS";
        case ERR_INVALID_INPUT:    return "INVALID_INPUT";
        case ERR_PASSWORD_WEAK:    return "PASSWORD_WEAK";
        case ERR_BUFFER_OVERFLOW:  return "BUFFER_OVERFLOW";
        case ERR_INTERNAL:         return "INTERNAL";
        default:                   return "UNKNOWN";
    }
}

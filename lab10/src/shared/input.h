#ifndef SCE102_INPUT_H
#define SCE102_INPUT_H

#include <stdbool.h>
#include <stddef.h>

/**
 * @file input.h
 * @brief Safe input helpers.
 *
 * The original lab exercises use `gets()` (removed in ISO C11) and `scanf`,
 * both of which are unsafe and cause the buffer-interaction bugs the lab
 * note warns about. This module replaces them with `fgets`-based readers
 * that bound input to a caller-supplied buffer and strip the trailing
 * newline, following the guide's "edge cases and invalid inputs" rule.
 */

/** Result of a bounded input operation. */
typedef enum {
    INPUT_OK = 0,
    INPUT_EOF,
    INPUT_TRUNCATED,
    INPUT_INVALID
} InputStatus;

/**
 * Read a line from stdin into `buf` (size `cap`), always NUL-terminated.
 * Strips a trailing newline if present and consumes the complete input line.
 *
 * @param buf   Destination buffer.
 * @param cap   Capacity of buf in bytes; must be >= 1.
 * @return INPUT_OK, INPUT_EOF, INPUT_TRUNCATED, or INPUT_INVALID.
 */
InputStatus input_read_line(char *buf, size_t cap);

/**
 * Read a single whitespace-delimited token from a complete input line.
 *
 * @param buf   Destination buffer.
 * @param cap   Capacity of buf in bytes; must be >= 1.
 * @return INPUT_OK, INPUT_EOF, INPUT_TRUNCATED, or INPUT_INVALID.
 */
InputStatus input_read_token(char *buf, size_t cap);

/** Backward-compatible boolean wrapper for callers that only need success. */
bool input_gets(char *buf, int cap);

/** Backward-compatible token wrapper; returns length, or -1 on failure. */
int input_scanf_token(char *buf, int cap);

/**
 * Discard the remainder of the current stdin line, including the newline.
 * Useful after a partial read. Safe to call on EOF (no-op).
 */
void input_flush_line(void);

#endif /* SCE102_INPUT_H */

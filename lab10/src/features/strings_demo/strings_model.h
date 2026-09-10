#ifndef SCE102_STRINGS_MODEL_H
#define SCE102_STRINGS_MODEL_H

/**
 * @file strings_model.h
 * @brief Domain model for the strings_demo feature (L1001-L1004).
 *
 * Encapsulates the bounded string buffers used by the exercises.
 * Per the guide's "one responsibility per file" and "put behavior
 * with data" rules, the buffer owns its size checks.
 */

#include <stdbool.h>
#include "config.h"

/** A bounded, NUL-terminated character buffer for exercises. */
typedef struct {
    char  data[CONFIG_MAX_STRING_LEN + 1]; /** +1 for NUL. */
    int   capacity;                         /** CONFIG_MAX_STRING_LEN. */
    int   length;                           /** Current length minus NUL. */
} StringBuffer;

/**
 * Initialize a buffer as empty (length 0, NUL-terminated).
 * @param sb  Buffer to initialize.
 */
void string_buffer_init(StringBuffer *sb);

/**
 * Load a literal string into the buffer (truncating if it exceeds
 * capacity). Length is updated to reflect stored content.
 *
 * @param sb     Target buffer.
 * @param src    NUL-terminated source string (may be NULL -> empty).
 * @return true if the full source fit, false if it was truncated.
 */
bool string_buffer_copy(StringBuffer *sb, const char *src);

/**
 * Append a literal string to the buffer, respecting capacity.
 * Does not overflow; writes are always NUL-terminated.
 *
 * @param sb    Target buffer.
 * @param src   NUL-terminated source string (may be NULL -> no-op).
 * @return true if the full source was appended, false if truncated.
 */
bool string_buffer_append(StringBuffer *sb, const char *src);

/**
 * Return the logical length of the buffer's content (excludes NUL).
 * @param sb  Buffer.
 * @return Length in characters.
 */
int string_buffer_len(const StringBuffer *sb);

#endif /* SCE102_STRINGS_MODEL_H */

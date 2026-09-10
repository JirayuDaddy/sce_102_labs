/**
 * @file strings_model.c
 * @brief Implementation of the bounded StringBuffer for exercises.
 */

#include "strings_model.h"

#include <string.h>

static bool valid_buffer(const StringBuffer *sb) {
    return sb != NULL && sb->capacity >= 0 &&
           sb->capacity <= CONFIG_MAX_STRING_LEN && sb->length >= 0 &&
           sb->length <= sb->capacity &&
           sb->data[sb->length] == '\0';
}

void string_buffer_init(StringBuffer *sb) {
    if (sb == NULL) {
        return;
    }
    sb->capacity = CONFIG_MAX_STRING_LEN;
    sb->length = 0;
    sb->data[0] = '\0';
}

bool string_buffer_copy(StringBuffer *sb, const char *src) {
    if (sb == NULL || sb->capacity < 0 ||
        sb->capacity > CONFIG_MAX_STRING_LEN) {
        return false;
    }
    sb->length = 0;
    if (src == NULL) {
        sb->data[0] = '\0';
        return true;
    }
    size_t capacity = (size_t)sb->capacity;
    size_t source_len = strnlen(src, capacity + 1);
    size_t stored_len = source_len > capacity ? capacity : source_len;

    /* memmove also handles a source that aliases sb->data. */
    memmove(sb->data, src, stored_len);
    sb->data[stored_len] = '\0';
    sb->length = (int)stored_len;
    return source_len <= capacity;
}

bool string_buffer_append(StringBuffer *sb, const char *src) {
    if (!valid_buffer(sb) || src == NULL) {
        return false;
    }
    size_t remain = (size_t)(sb->capacity - sb->length);
    size_t src_len = strnlen(src, remain + 1);
    bool   full = src_len <= remain;
    size_t to_copy = full ? src_len : remain;

    if (to_copy > 0) {
        memmove(sb->data + sb->length, src, to_copy);
        sb->length += (int)to_copy;
    }
    sb->data[sb->length] = '\0';
    return full;
}

int string_buffer_len(const StringBuffer *sb) {
    if (sb == NULL) {
        return 0;
    }
    return sb->length;
}

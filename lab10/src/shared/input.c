#include "input.h"

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <limits.h>

/**
 * @file input.c
 * @brief Implementation of safe input helpers (fgets-backed, no gets).
 */

InputStatus input_read_line(char *buf, size_t cap) {
    if (buf == NULL || cap == 0 || cap > (size_t)INT_MAX) {
        return INPUT_INVALID;
    }

    buf[0] = '\0';
    if (fgets(buf, (int)cap, stdin) == NULL) {
        buf[0] = '\0';
        return INPUT_EOF;
    }

    size_t len = strlen(buf);
    if (len > 0 && buf[len - 1] == '\n') {
        buf[len - 1] = '\0';
        return INPUT_OK;
    }

    /* No newline means either an exact-fit line or truncated input. */
    int ch;
    bool truncated = false;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        truncated = true;
    }
    return truncated ? INPUT_TRUNCATED : INPUT_OK;
}

InputStatus input_read_token(char *buf, size_t cap) {
    InputStatus status = input_read_line(buf, cap);
    if (status != INPUT_OK) {
        return status;
    }

    char *start = buf;
    while (*start != '\0' && isspace((unsigned char)*start)) {
        start++;
    }
    if (*start == '\0') {
        buf[0] = '\0';
        return INPUT_INVALID;
    }

    char *end = start;
    while (*end != '\0' && !isspace((unsigned char)*end)) {
        end++;
    }
    *end = '\0';

    if (start != buf) {
        memmove(buf, start, (size_t)(end - start) + 1);
    }
    return INPUT_OK;
}

bool input_gets(char *buf, int cap) {
    return input_read_line(buf, cap > 0 ? (size_t)cap : 0) == INPUT_OK;
}

int input_scanf_token(char *buf, int cap) {
    if (cap < 1) {
        return -1;
    }
    InputStatus status = input_read_token(buf, (size_t)cap);
    if (status != INPUT_OK) {
        return -1;
    }
    return (int)strlen(buf);
}

void input_flush_line(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        /** discard */
    }
}

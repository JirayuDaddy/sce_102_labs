#include "logger.h"

#include <stdio.h>
#include <stdarg.h>
#include <time.h>

/**
 * @file logger.c
 * @brief Implementation of the minimal structured logger.
 */

static LogLevel s_min_level = LOG_INFO;

void logger_init(LogLevel level) {
    s_min_level = level;
}

const char *log_level_label(LogLevel level) {
    switch (level) {
        case LOG_DEBUG: return "DEBUG";
        case LOG_INFO:  return "INFO";
        case LOG_WARN:  return "WARN";
        case LOG_ERROR: return "ERROR";
        case LOG_NONE:  return "NONE";
        default:        return "UNKNOWN";
    }
}

void logger_log(LogLevel level, const char *tag, const char *fmt, ...) {
    if (level < s_min_level) {
        return; /** below threshold, drop silently */
    }
    if (tag == NULL) {
        tag = "app";
    }
    if (fmt == NULL) {
        return;
    }

    /** Timestamp per the guide: structured-ish prefix for correlation. */
    time_t now = time(NULL);
    struct tm tm_info = {0};
    char tbuf[32] = "unknown-time";
    if (now != (time_t)-1 && localtime_r(&now, &tm_info) != NULL) {
        if (strftime(tbuf, sizeof(tbuf), "%Y-%m-%dT%H:%M:%S",
                     &tm_info) == 0) {
            (void)snprintf(tbuf, sizeof(tbuf), "%s", "unknown-time");
        }
    }

    fprintf(stderr, "[%s] %s [%s] ", tbuf, log_level_label(level), tag);
    va_list ap;
    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);
    fputc('\n', stderr);
}

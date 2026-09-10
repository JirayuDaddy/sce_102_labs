#ifndef SCE102_LOGGER_H
#define SCE102_LOGGER_H

/**
 * @file logger.h
 * @brief Minimal structured logger.
 *
 * Logs at boundaries (input received, decisions made, errors) per the
 * guide's logging section. Levels map to the guide's semantics:
 * error = something broke, warn = degraded, info = lifecycle,
 * debug = dev detail. Output goes to stderr so stdout stays clean.
 */

typedef enum {
    LOG_DEBUG = 0,
    LOG_INFO  = 1,
    LOG_WARN  = 2,
    LOG_ERROR = 3,
    LOG_NONE  = 4  /** Disable all log output. */
} LogLevel;

/**
 * Initialize the logger with a minimum level. Messages below this
 * threshold are discarded.
 *
 * @param level  Minimum level to emit.
 */
void logger_init(LogLevel level);

/**
 * Log a message at the given level with a tag prefix.
 *
 * @param level  Severity.
 * @param tag    Short module tag (e.g. "auth").
 * @param fmt    printf-style format.
 * @param ...    Format arguments.
 */
void logger_log(LogLevel level, const char *tag, const char *fmt, ...);

/**
 * Return the label for a log level. Always non-NULL.
 */
const char *log_level_label(LogLevel level);

#endif /* SCE102_LOGGER_H */

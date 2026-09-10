#ifndef SCE102_TEST_RUNNER_H
#define SCE102_TEST_RUNNER_H

/**
 * @file test_runner.h
 * @brief Minimal unit-testing framework (no external deps).
 *
 * Implements the testing pyramid's base: fast, focused unit tests.
 * Uses GCC `__attribute__((constructor))` for auto-registration so
 * each TEST() is collected without explicit calls from main().
 *
 * Provides TEST/EXPECT/ASSERT macros and a runner that prints a
 * summary with pass/fail counts.
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

/** Type of a test function: returns void, sends no args. */
typedef void (*TestFunc)(void);

/**
 * Register a test into the global registry. Called automatically by
 * the TEST() macro via constructor; can also be called manually.
 */
void test_register(const char *name, TestFunc func);

/**
 * Run all registered tests.
 * @return 0 if all passed, 1 if any failed.
 */
int test_run_all(void);

/** Per-test failure state, reset before each test runs. */
extern bool g_current_test_failed;

/**
 * Define a test function and auto-register it.
 * Usage:
 *   TEST(my_feature_happy_path) {
 *       EXPECT(true);
 *   }
 *
 * The constructor attribute makes the registration run before main(),
 * populating the global registry without any boilerplate in main.
 */
#define TEST(name)                                                             \
    static void name(void);                                                    \
    __attribute__((constructor))                                               \
    static void test_init_##name(void) {                                       \
        test_register(#name, name);                                            \
    }                                                                          \
    static void name(void)

/**
 * Check a boolean condition. On false, records a failure with file:line.
 * Does NOT abort the current test (collects multiple failures).
 */
#define EXPECT(cond)                                                           \
    do {                                                                       \
        if (!(cond)) {                                                         \
            g_current_test_failed = true;                                      \
            fprintf(stderr, "  FAIL: %s:%d: EXPECT(%s) failed\n",              \
                    __FILE__, __LINE__, #cond);                               \
        }                                                                      \
    } while (0)

/**
 * Assert a boolean condition. On false, records a failure AND aborts
 * the current test function (returns immediately).
 */
#define ASSERT(cond)                                                           \
    do {                                                                       \
        if (!(cond)) {                                                         \
            g_current_test_failed = true;                                      \
            fprintf(stderr, "  ABORT: %s:%d: ASSERT(%s) failed\n",             \
                    __FILE__, __LINE__, #cond);                               \
            return;                                                            \
        }                                                                      \
    } while (0)

#endif /* SCE102_TEST_RUNNER_H */

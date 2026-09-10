/**
 * @file unit_test_main.c
 * @brief Composition root for the unit-test binary.
 *
 * Aggregates all unit test suites and runs them via the test runner.
 * Each suite auto-registers its TEST()s into the global registry at
 * static-init time, so main only needs to link the test .c files in.
 */

#include "test_runner.h"
#include "logger.h"

/* The test .c files register their tests at link/init time. */

int main(void) {
    logger_init(LOG_NONE); /** keep application logs out of test output */
    return test_run_all();
}

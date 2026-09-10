/**
 * @file test_runner.c
 * @brief Implementation of the minimal test runner.
 */

#include "test_runner.h"

#include <stdio.h>
#include <string.h>

/**
 * The registry is a simple static array (bounded, deterministic).
 * A production system might use a dynamic list; a bounded array keeps
 * memory predictable and avoids allocation in tests.
 */
#define MAX_TESTS 256

typedef struct {
    const char *name;
    TestFunc   func;
} TestEntry;

static TestEntry s_tests[MAX_TESTS];
static int       s_test_count = 0;

bool g_current_test_failed = false;

void test_register(const char *name, TestFunc func) {
    if (name == NULL || func == NULL) {
        return;
    }
    if (s_test_count >= MAX_TESTS) {
        fprintf(stderr, "test_register: max tests (%d) reached, "
                "skipping '%s'\n", MAX_TESTS, name);
        return;
    }
    s_tests[s_test_count].name = name;
    s_tests[s_test_count].func = func;
    s_test_count++;
}

int test_run_all(void) {
    int passed = 0;
    int failed = 0;

    printf("\n=== Test Suite (%d tests) ===\n", s_test_count);

    for (int i = 0; i < s_test_count; i++) {
        g_current_test_failed = false;
        printf("[ RUN      ] %s\n", s_tests[i].name);
        fflush(stdout);

        /** Run the test; an ASSERT failure returns early. */
        s_tests[i].func();
        fflush(stdout);

        if (g_current_test_failed) {
            failed++;
            printf("[  FAILED  ] %s\n", s_tests[i].name);
        } else {
            passed++;
            printf("[  PASSED  ] %s\n", s_tests[i].name);
        }
    }

    printf("\n=== Summary ===\n");
    printf("Total:  %d\n", s_test_count);
    printf("Passed: %d\n", passed);
    printf("Failed: %d\n", failed);
    printf("===\n");

    /* A test binary that discovered nothing must not pass silently. */
    return (s_test_count > 0 && failed == 0) ? 0 : 1;
}

/** Silence "unused" warnings for translation-unit-only helpers. */
void test_runner_unused(void) {
    (void)strlen;
    (void)fprintf;
}

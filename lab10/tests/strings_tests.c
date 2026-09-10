/**
 * @file strings_tests.c
 * @brief Unit tests for the strings_demo feature (testing pyramid base).
 *
 * Covers the domain StringBuffer with happy paths, edge cases, and
 * error/invalid-input scenarios. The controller (I/O) is exercised
 * separately in integration tests.
 */

#include "test_runner.h"
#include "strings_model.h"
#include "config.h"

#include <string.h>

/** --- StringBuffer: happy path --- */

TEST(strings_buffer_init_empty) {
    StringBuffer sb;
    string_buffer_init(&sb);
    EXPECT(string_buffer_len(&sb) == 0);
    EXPECT(sb.data[0] == '\0');
    EXPECT(sb.capacity == CONFIG_MAX_STRING_LEN);
}

TEST(strings_buffer_copy_full_fit) {
    StringBuffer sb;
    string_buffer_init(&sb);
    bool ok = string_buffer_copy(&sb, "Hello");
    EXPECT(ok == true);
    EXPECT(string_buffer_len(&sb) == 5);
    EXPECT(strcmp(sb.data, "Hello") == 0);
}

TEST(strings_buffer_copy_truncates_oversize) {
    StringBuffer sb;
    string_buffer_init(&sb);
    /** One char over capacity -> must truncate and report false. */
    char long_str[CONFIG_MAX_STRING_LEN + 2];
    memset(long_str, 'A', sizeof(long_str));
    long_str[sizeof(long_str) - 1] = '\0';

    bool ok = string_buffer_copy(&sb, long_str);
    EXPECT(ok == false);
    EXPECT(string_buffer_len(&sb) == CONFIG_MAX_STRING_LEN);
}

TEST(strings_buffer_append_within_capacity) {
    StringBuffer sb;
    string_buffer_init(&sb);
    (void)string_buffer_copy(&sb, "Hello");
    bool ok = string_buffer_append(&sb, " World");
    EXPECT(ok == true);
    EXPECT(string_buffer_len(&sb) == 11);
    EXPECT(strcmp(sb.data, "Hello World") == 0);
}

TEST(strings_buffer_append_truncates_when_full) {
    StringBuffer sb;
    string_buffer_init(&sb);
    /** Fill completely, then append must truncate. */
    char big[CONFIG_MAX_STRING_LEN + 1];
    memset(big, 'X', CONFIG_MAX_STRING_LEN);
    big[CONFIG_MAX_STRING_LEN] = '\0';
    (void)string_buffer_copy(&sb, big);

    bool ok = string_buffer_append(&sb, " overflow");
    EXPECT(ok == false);
    EXPECT(string_buffer_len(&sb) == CONFIG_MAX_STRING_LEN);
}

/** --- Edge cases --- */

TEST(strings_buffer_copy_null_src) {
    StringBuffer sb;
    string_buffer_init(&sb);
    (void)string_buffer_copy(&sb, "data");
    bool ok = string_buffer_copy(&sb, NULL);
    EXPECT(ok == true);
    EXPECT(string_buffer_len(&sb) == 0);
    EXPECT(sb.data[0] == '\0');
}

TEST(strings_buffer_append_null_src) {
    StringBuffer sb;
    string_buffer_init(&sb);
    bool ok = string_buffer_append(&sb, NULL);
    EXPECT(ok == false);
    EXPECT(string_buffer_len(&sb) == 0);
}

TEST(strings_buffer_append_empty_to_empty) {
    StringBuffer sb;
    string_buffer_init(&sb);
    bool ok = string_buffer_append(&sb, "");
    EXPECT(ok == true);
    EXPECT(string_buffer_len(&sb) == 0);
}

TEST(strings_buffer_append_alias_safe) {
    StringBuffer sb;
    string_buffer_init(&sb);
    (void)string_buffer_copy(&sb, "abc");
    bool ok = string_buffer_append(&sb, sb.data);
    EXPECT(ok == true);
    EXPECT(strcmp(sb.data, "abcabc") == 0);
}

/** --- Error / invalid input --- */

TEST(strings_buffer_init_null_is_noop) {
    /** Should not crash; no defined behavior beyond not dying. */
    string_buffer_init(NULL);
    EXPECT(true);
}

TEST(strings_buffer_copy_null_buf) {
    bool ok = string_buffer_copy(NULL, "x");
    EXPECT(ok == false);
}

TEST(strings_buffer_len_null_returns_zero) {
    int len = string_buffer_len(NULL);
    EXPECT(len == 0);
}

/**
 * Register all strings tests. Called from main test runner.
 */
void strings_tests_register(void);
void strings_tests_register(void) {
    /* tests are auto-registered by the TEST macro, nothing to do */
}

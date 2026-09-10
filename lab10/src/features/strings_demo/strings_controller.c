/**
 * @file strings_controller.c
 * @brief Implementation of the L1001-L1004 string demos.
 */

#include "strings_controller.h"
#include "input.h"
#include "logger.h"

#include <stdio.h>
#include <string.h>

/**
 * @brief L1001: char arrays initialized two ways; print with %s.
 *
 * Demonstrates:
 *   - s1 as a brace-initialized char array: {'D','i','a','n','a','\0'}
 *   - s2 as a string literal assignment: "Diana"
 * Both are printed with printf using %s. The model StringBuffer wraps
 * s1 so the domain keeps ownership of bounds.
 */
void strings_run_l1001(void) {
    StringBuffer s1;
    string_buffer_init(&s1);
    string_buffer_copy(&s1, "Diana");

    char s2[CONFIG_MAX_STRING_LEN + 1];
    snprintf(s2, sizeof(s2), "%s", "Diana");

    printf("%s\n", s1.data);
    printf("%s\n", s2);

    logger_log(LOG_DEBUG, "strings", "L1001 ran; s1 len=%d, s2 '%s'",
               string_buffer_len(&s1), s2);
}

/**
 * @brief L1002: read two strings (gets + scanf), print with puts.
 *
 * Uses safe replacements: input_gets (fgets-based) for s1 and
 * input_scanf_token for s2, avoiding the unsafe gets/scanf pair
 * that the lab note warns about.
 */
void strings_run_l1002(void) {
    char s1[CONFIG_MAX_STRING_LEN + 1];
    char s2[CONFIG_MAX_STRING_LEN + 1];

    printf("Enter your full name (s1): ");
    if (input_read_line(s1, sizeof(s1)) != INPUT_OK) {
        puts("Input is too long or unavailable.");
        return;
    }

    printf("Enter your full name again (s2): ");
    if (input_read_token(s2, sizeof(s2)) != INPUT_OK) {
        puts("Input is too long or unavailable.");
        return;
    }

    printf("Results\n");
    puts(s1);
    puts(s2);

    logger_log(LOG_INFO, "strings", "L1002 ran; s1='%s' s2='%s'", s1, s2);
}

/**
 * @brief L1003: read two strings via gets, print, copy "No Data" in s2,
 * print again.
 *
 * Demonstrates safe copy-into-buffer using the domain StringBuffer,
 * then re-prints before and after the overwrite of s2.
 */
void strings_run_l1003(void) {
    char s1[CONFIG_MAX_STRING_LEN + 1];
    StringBuffer sb2;
    string_buffer_init(&sb2);
    char input[CONFIG_MAX_STRING_LEN + 1];

    printf("Enter your string (s1): ");
    if (input_read_line(s1, sizeof(s1)) != INPUT_OK) {
        puts("Input is too long or unavailable.");
        return;
    }

    printf("Enter your string (s2): ");
    if (input_read_line(input, sizeof(input)) != INPUT_OK ||
        !string_buffer_copy(&sb2, input)) {
        puts("Input is too long or unavailable.");
        return;
    }

    printf("Before\n");
    puts(s1);
    puts(sb2.data);

    string_buffer_copy(&sb2, "No Data");

    printf("After\n");
    puts(s1);
    puts(sb2.data);

    logger_log(LOG_INFO, "strings", "L1003 ran; s1='%s' s2='%s'",
               s1, sb2.data);
}

/**
 * @brief L1004: read two strings via gets, print, append s2 to s1,
 * print concatenated s1, and report its character count.
 *
 * Concatenation is performed through the domain StringBuffer so the
 * capacity bound is enforced rather than relying on raw strcat.
 */
void strings_run_l1004(void) {
    StringBuffer s1;
    char         s2[CONFIG_MAX_STRING_LEN + 1];
    string_buffer_init(&s1);

    printf("Enter your string (s1): ");
    if (input_read_line(s1.data, sizeof(s1.data)) != INPUT_OK) {
        puts("Input is too long or unavailable.");
        return;
    }
    s1.length = (int)strnlen(s1.data, sizeof(s1.data) - 1);

    printf("Enter your string (s2): ");
    if (input_read_line(s2, sizeof(s2)) != INPUT_OK) {
        puts("Input is too long or unavailable.");
        return;
    }

    printf("Before\n");
    puts(s1.data);
    puts(s2);

    string_buffer_append(&s1, s2);

    printf("After\n");
    puts(s1.data);
    printf("There are %d characters in s1\n", string_buffer_len(&s1));

    logger_log(LOG_INFO, "strings", "L1004 ran; s1='%s' count=%d",
               s1.data, string_buffer_len(&s1));
}

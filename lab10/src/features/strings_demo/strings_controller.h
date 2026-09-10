#ifndef SCE102_STRINGS_CONTROLLER_H
#define SCE102_STRINGS_CONTROLLER_H

/**
 * @file strings_controller.h
 * @brief Thin I/O layer for the L1001-L1004 string exercises.
 *
 * The controller is the entrypoint for these exercises: it parses input,
 * delegates to the domain model (StringBuffer), and prints results.
 * Per the guide: controllers are translators, not decision-makers.
 */

#include "strings_model.h"

/**
 * Run the L1001 demo: two char arrays, one brace-initialized, one from
 * a string literal; print both with printf %s. No input.
 */
void strings_run_l1001(void);

/**
 * Run the L1002 demo: read two strings via gets (s1) and scanf (s2),
 * then print both with puts.
 */
void strings_run_l1002(void);

/**
 * Run the L1003 demo: read two strings via gets, print, copy "No Data"
 * into s2, print again.
 */
void strings_run_l1003(void);

/**
 * Run the L1004 demo: read two strings via gets, print, append s2 to s1,
 * print the concatenated s1, and report its length.
 */
void strings_run_l1004(void);

#endif /* SCE102_STRINGS_CONTROLLER_H */

#ifndef SCE102_AUTH_CONTROLLER_H
#define SCE102_AUTH_CONTROLLER_H

/**
 * @file auth_controller.h
 * @brief Thin I/O entrypoint for the auth feature (L1005 / L10O01).
 *
 * The controller only handles prompts and output. All business logic
 * (authenticate, change_password) lives in the use-case layer
 * (auth_service.c). This satisfies the guide's rule that
 * "controllers are translators, not decision-makers."
 */

#include "auth_port.h"

/**
 * Run the interactive login loop for L1005 / L10O01.
 *
 * - Prompts for username and password.
 * - Delegates to auth_authenticate for the decision.
 * - On admin success, offers a password-reset submenu (L10O01).
 * - On non-admin success, prints the welcome and exits.
 * - On failure, prints "Error Username or Password" and re-prompts.
 *
 * @param repo   Injected user repository (port).
 */
void auth_controller_run(AuthRepository *repo);

#endif /* SCE102_AUTH_CONTROLLER_H */

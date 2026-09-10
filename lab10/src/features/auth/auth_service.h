#ifndef SCE102_AUTH_SERVICE_H
#define SCE102_AUTH_SERVICE_H

/**
 * @file auth_service.h
 * @brief Application / use-case layer for the auth feature.
 *
 * The service orchestrates domain logic: it depends on the AuthRepository
 * PORT (abstraction), not the in-memory adapter. Per the guide, use cases
 * live in the "Application" ring and depend inward toward the domain.
 *
 * Implements L1005 (login) and L10O01 (admin password reset).
 */

#include "auth_port.h"
#include "auth_model.h"
#include "errors.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Authenticate a user against stored credentials.
 *
 * Business rules (the core decision logic, kept out of controllers):
 *   - Username must resolve to an active user.
 *   - Password must match the stored value.
 *   - Failure in either yields ERR_BAD_CREDENTIALS ("Error Username or
 *     Password") per L1005.
 *
 * @param repo  Injected user repository (port).
 * @param cred  Submitted credentials.
 * @param out_kind  On success, receives which welcome message to show.
 * @return ERR_NONE on success; ERR_BAD_CREDENTIALS on bad login.
 */
Result auth_authenticate(AuthRepository *repo,
                         const char *username, const char *password,
                         WelcomeKind *out_kind);

/**
 * Admin-triggered password change for a target user.
 *
 * Business rules (L10O01):
 *   - The actor performing the reset must be admin.
 *   - The target user must exist and be active.
 *   - The new password must pass a minimal validation rule
 *     (non-empty, within length bounds).
 *
 * @param repo         Injected user repository (port).
 * @param admin_username Username of the admin performing the reset.
 * @param admin_password Current password of that admin. The service
 *                       re-authenticates it instead of trusting a caller-
 *                       supplied role field.
 * @param target_name  Username whose password is being changed.
 * @param new_password The new password.
 * @return ERR_NONE on success; ERR_BAD_CREDENTIALS if admin_user is not
 *         an admin; ERR_USER_NOT_FOUND if target doesn't exist;
 *         ERR_INVALID_INPUT if the password is empty/NULL.
 */
Result auth_change_password(AuthRepository *repo,
                            const char *admin_username,
                            const char *admin_password,
                            const char *target_name, const char *new_password);

#ifdef __cplusplus
}
#endif

#endif /* SCE102_AUTH_SERVICE_H */

#ifndef SCE102_AUTH_REPOSITORY_H
#define SCE102_AUTH_REPOSITORY_H

/**
 * @file auth_repository.h
 * @brief In-memory repository ADAPTER implementing the auth port.
 *
 * This is the outermost layer per the guide. It implements the
 * AuthRepositoryVTable against an in-memory array. Swapping to a
 * file or database adapter requires only replacing this file and
 * wiring it at the composition root — domain and use cases are
 * unchanged.
 */

#include "auth_port.h"
#include "auth_model.h"

#ifdef __cplusplus
extern "C" {
#endif

/** Capacity of the in-memory user store. */
#define AUTH_REPO_CAPACITY 64

/**
 * Allocate and initialize an in-memory repository with the three
 * seeded demo users (admin/user1/user2).
 *
 * @return A newly allocated AuthRepository (caller frees via destroy),
 *         or NULL on allocation failure.
 */
AuthRepository *auth_repository_create(void);

/**
 * Look up a user by username in the in-memory store.
 * (Implements AuthRepositoryVTable.find_by_username.)
 */
Result auth_repository_find_by_username(AuthRepository *repo,
                                        const char *username, User *out);

/**
 * Save (create or update) a user.
 * (Implements AuthRepositoryVTable.save.)
 */
Result auth_repository_save(AuthRepository *repo, const User *user);

/**
 * Count active users.
 * (Implements AuthRepositoryVTable.count_active.)
 */
int auth_repository_count_active(const AuthRepository *repo);

/**
 * Free the repository and its internal storage.
 * (Implements AuthRepositoryVTable.destroy.)
 */
void auth_repository_destroy(AuthRepository *repo);

#ifdef __cplusplus
}
#endif

#endif /* SCE102_AUTH_REPOSITORY_H */

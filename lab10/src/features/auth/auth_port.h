#ifndef SCE102_AUTH_PORT_H
#define SCE102_AUTH_PORT_H

/**
 * @file auth_port.h
 * @brief Repository PORT (interface) for user persistence.
 *
 * Per the Clean/Hexagonal guide: the domain defines ports (interfaces)
 * that infrastructure implements as adapters. The auth service (use
 * case) depends on this abstraction, never on the in-memory repo
 * directly — enabling Dependency Inversion (rule 5 of the guide).
 *
 * The adapter is injected at the composition root (src/main.c).
 */

#include "auth_model.h"
#include "errors.h"

/**
 * Opaque handle to a user repository. The concrete type lives in the
 * infrastructure adapter; the use case only sees this typedef.
 */
typedef struct AuthRepository AuthRepository;

/**
 * Function pointer table (interface) the use case calls.
 * Each adapter provides these functions.
 */
typedef struct {
    /**
     * Find a user by username. Writes into *out on success.
     * @return ERR_NONE on hit, ERR_USER_NOT_FOUND otherwise.
     */
    Result (*find_by_username)(AuthRepository *repo,
                               const char *username, User *out);

    /**
     * Persist (create or update) a user in the store.
     * @return ERR_NONE on success, ERR_USER_NOT_FOUND if the user
     *         doesn't exist (for update), or ERR_BUFFER_OVERFLOW if
     *         the store is full.
     */
    Result (*save)(AuthRepository *repo, const User *user);

    /**
     * Count how many users match a predicate (here: active).
     * Used for diagnostics and seeding checks.
     */
    int (*count_active)(const AuthRepository *repo);

    /** Free any resources owned by the repository. */
    void (*destroy)(AuthRepository *repo);
} AuthRepositoryVTable;

/**
 * The repository handle exposes its vtable so the use case can call
 * through the abstraction. Adapters fill this in.
 */
struct AuthRepository {
    const AuthRepositoryVTable *vtable;
};

#endif /* SCE102_AUTH_PORT_H */

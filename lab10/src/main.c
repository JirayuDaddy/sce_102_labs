/**
 * @file main.c
 * @brief Entrypoint / composition root.
 *
 * Per the guide: the composition root wires adapters into use cases.
 * This file knows about infrastructure (auth_repository_create) and
 * entrypoints (controllers), but never contains business logic.
 *
 * Run modes:
 *   ./lab10          -> interactive login (L1005/L10O01) loop
 *   ./lab10 strings  -> interactive strings demos (L1001-L1004) loop
 *   ./lab10 test     -> not supported here (use `make test`)
 */

#include "config/config.h"
#include "shared/logger.h"
#include "features/auth/auth_repository.h"
#include "features/auth/auth_controller.h"
#include "features/strings_demo/strings_controller.h"

#include <stdio.h>
#include <string.h>

static void print_usage(const char *prog) {
    fprintf(stderr, "Usage: %s [auth|strings]\n", prog);
    fprintf(stderr, "  auth     - run the login system (default)\n");
    fprintf(stderr, "  strings  - run the L1001-L1004 string demos\n");
}

int main(int argc, char **argv) {
    const char *mode = "auth";
    if (argc > 2) {
        print_usage(argv[0]);
        return 1;
    }
    if (argc == 2) {
        if (strcmp(argv[1], "strings") == 0 || strcmp(argv[1], "auth") == 0) {
            mode = argv[1];
        } else {
            print_usage(argv[0]);
            return 1;
        }
    }

    /* Initialize the logger once at startup (config-driven level). */
    logger_init(LOG_INFO);

    if (strcmp(mode, "strings") == 0) {
        /**
         * Strings demos are stateless and need no repository.
         * Each function reads input and prints its own output.
         */
        printf("=== Lab 10 String Exercises ===\n\n");
        strings_run_l1001();
        printf("\n--- L1002 ---\n");
        strings_run_l1002();
        printf("\n--- L1003 ---\n");
        strings_run_l1003();
        printf("\n--- L1004 ---\n");
        strings_run_l1004();
        return 0;
    }

    /**
     * Auth mode: composition root.
     * Create the repository adapter, then hand it to the controller
     * (entrypoint). The domain and use cases never touch the adapter
     * directly — only through the port's vtable.
     */
    AuthRepository *repo = auth_repository_create();
    if (repo == NULL) {
        logger_log(LOG_ERROR, "main", "failed to create repository");
        fprintf(stderr, "Fatal: could not initialize user store.\n");
        return 2;
    }

    auth_controller_run(repo);

    repo->vtable->destroy(repo);
    logger_log(LOG_INFO, "main", "shutdown complete");
    return 0;
}

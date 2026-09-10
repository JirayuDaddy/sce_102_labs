# Makefile for Lab 10 — Strings & Auth System (production-ready C)
#
# Targets:
#   make            build the interactive application
#   make test       build & run unit tests
#   make integration  build & run integration tests
#   make all        build everything
#   make clean      remove build artifacts
#   make run        build then run the app
#   make run-strings  build then run the strings demos

CC      := gcc
CFLAGS  := -std=c11 -Wall -Wextra -Wpedantic -g -O0 \
           -Wconversion -Wshadow -Wformat-security \
           -D_DEFAULT_SOURCE
LDFLAGS :=

SRC_DIR   := src
TEST_DIR  := tests
BUILD_DIR := build

# --- Application source files (production code) ---
APP_SRCS := \
    $(SRC_DIR)/main.c \
    $(SRC_DIR)/shared/errors.c \
    $(SRC_DIR)/shared/logger.c \
    $(SRC_DIR)/shared/input.c \
    $(SRC_DIR)/features/auth/auth_model.c \
    $(SRC_DIR)/features/auth/auth_repository.c \
    $(SRC_DIR)/features/auth/auth_service.c \
    $(SRC_DIR)/features/auth/auth_controller.c \
    $(SRC_DIR)/features/strings_demo/strings_model.c \
    $(SRC_DIR)/features/strings_demo/strings_controller.c

APP_OBJS := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(APP_SRCS))
APP_TARGET := $(BUILD_DIR)/lab10

# --- Unit test sources (testing pyramid base — fast, focused) ---
UNIT_SRCS := \
    $(TEST_DIR)/test_runner.c \
    $(TEST_DIR)/unit_test_main.c \
    $(TEST_DIR)/strings_tests.c \
    $(TEST_DIR)/auth_tests.c \
    $(SRC_DIR)/shared/errors.c \
    $(SRC_DIR)/shared/logger.c \
    $(SRC_DIR)/features/auth/auth_model.c \
    $(SRC_DIR)/features/auth/auth_repository.c \
    $(SRC_DIR)/features/auth/auth_service.c

UNIT_OBJS := $(patsubst $(TEST_DIR)/%.c,$(BUILD_DIR)/%.o,$(TEST_DIR)/test_runner.c $(TEST_DIR)/unit_test_main.c $(TEST_DIR)/strings_tests.c $(TEST_DIR)/auth_tests.c)
# Note: src objects reused; rebuild from APP's pattern.
UNIT_SRC_OBJS := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRC_DIR)/shared/errors.c $(SRC_DIR)/shared/logger.c $(SRC_DIR)/features/auth/auth_model.c $(SRC_DIR)/features/auth/auth_repository.c $(SRC_DIR)/features/auth/auth_service.c $(SRC_DIR)/features/strings_demo/strings_model.c)
UNIT_OBJS := $(UNIT_OBJS) $(UNIT_SRC_OBJS)
UNIT_TARGET := $(BUILD_DIR)/unit_tests

# --- Integration test sources ---
INT_SRCS := \
    $(TEST_DIR)/integration/integration_main.c \
    $(SRC_DIR)/shared/errors.c \
    $(SRC_DIR)/shared/logger.c \
    $(SRC_DIR)/features/auth/auth_model.c \
    $(SRC_DIR)/features/auth/auth_repository.c \
    $(SRC_DIR)/features/auth/auth_service.c

INT_OBJS := $(patsubst $(TEST_DIR)/%.c,$(BUILD_DIR)/%.o,$(TEST_DIR)/integration/integration_main.c) \
            $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRC_DIR)/shared/errors.c $(SRC_DIR)/shared/logger.c $(SRC_DIR)/features/auth/auth_model.c $(SRC_DIR)/features/auth/auth_repository.c $(SRC_DIR)/features/auth/auth_service.c)
INT_TARGET := $(BUILD_DIR)/integration_tests

INC_FLAGS := -I$(SRC_DIR) -I$(SRC_DIR)/config -I$(SRC_DIR)/shared \
             -I$(SRC_DIR)/features/auth -I$(SRC_DIR)/features/strings_demo \
             -I$(TEST_DIR)

# --- Default: build the app ---
.PHONY: all clean test integration run run-strings

all: $(APP_TARGET) $(UNIT_TARGET) $(INT_TARGET)

# --- Pattern rules ---
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INC_FLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(TEST_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INC_FLAGS) -c $< -o $@

# --- Link the application ---
$(APP_TARGET): $(APP_OBJS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)
	@echo "[build] $(APP_TARGET)"

# --- Link & run unit tests ---
$(UNIT_TARGET): $(UNIT_OBJS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)
	@echo "[build] $(UNIT_TARGET)"

test: $(UNIT_TARGET)
	@echo "[test] running unit tests..."
	./$(UNIT_TARGET)

# --- Link & run integration tests ---
$(INT_TARGET): $(INT_OBJS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)
	@echo "[build] $(INT_TARGET)"

integration: $(INT_TARGET)
	@echo "[integration] running integration tests..."
	./$(INT_TARGET)

# --- Convenience ---
run: $(APP_TARGET)
	./$(APP_TARGET)

run-strings: $(APP_TARGET)
	./$(APP_TARGET) strings

clean:
	rm -rf $(BUILD_DIR)
	@echo "[clean] build directory removed"

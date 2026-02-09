# Makefile for TDD tests

CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC_DIR = ..
TEST_DIR = .

# Source files
SOURCES = $(SRC_DIR)/testlib.c
TEST_SOURCES = test_testlib_tdd_test.c

# Output
TEST_RUNNER = test_runner

all: test

test: $(TEST_RUNNER)
	./$(TEST_RUNNER) > test_output.txt 2>&1
	@echo "Tests completed. Results saved to test_output.txt"

$(TEST_RUNNER): $(SOURCES) $(TEST_SOURCES)
	$(CC) $(CFLAGS) -o $(TEST_RUNNER) $(SOURCES) $(TEST_SOURCES)

clean:
	rm -f $(TEST_RUNNER) test_output.txt

.PHONY: all test clean

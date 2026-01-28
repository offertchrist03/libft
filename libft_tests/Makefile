# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

# Source file with all functions (rename your _f file to all_functions.c)
LIBFT_SRC = all_functions.c

# All test main files
TESTS = atoi_main bzero_main calloc_main isalnum_main isalpha_main \
		isascii_main isdigit_main isprint_main memchr_main memcmp_main \
		memcpy_main memmove_main memset_main strchr_main strdup_main \
		strlcat_main strlcpy_main strlen_main strncmp_main strnstr_main \
		strrchr_main tolower_main toupper_main substr_main strjoin_main \
		strtrim_main split_main itoa_main strmapi_main striteri_main \
		put_main

# Executables
EXECS = $(TESTS)

# Default target
all: $(EXECS)

# Pattern rule to compile each test
%_main: %_main.c $(LIBFT_SRC)
	$(CC) $(CFLAGS) -o $@ $< $(LIBFT_SRC) -lbsd

# Clean executables
clean:
	rm -f $(EXECS)
	rm -f test_output.txt

# Run all tests
test: all
	@echo "========================================="
	@echo "Running all tests..."
	@echo "========================================="
	@for test in $(EXECS); do \
		echo ""; \
		echo "=================="; \
		echo "Running $$test..."; \
		echo "=================="; \
		./$$test; \
		echo ""; \
	done

# Run a specific test
run_%: %_main
	@echo "Running $<..."
	@./$<

.PHONY: all clean test

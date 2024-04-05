CC = gcc
CFLAGS = -std=c99 -pedantic -pedantic-errors -Werror -Wall -Wextra

# Find all source files in the current directory
SRCS := $(wildcard *.c)

# Generate executable names by removing the .c extension
EXECS := $(SRCS:.c=)

# Default target to build all executables
all: $(EXECS)

# Rule to compile each source file into an executable
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Target to build a single executable
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Target to clear all binaries
clean:
	rm -f $(EXECS)
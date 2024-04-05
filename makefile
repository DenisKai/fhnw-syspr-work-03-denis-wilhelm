CC=gcc 
CFLAGS=-std=c99 -pedantic -pedantic-errors -Werror -Wall -Wextra

all: my_copy

my_copy: my_copy.c

clean:
	rm -f my_copy

build:
	gcc -o mcopy my_copy.c

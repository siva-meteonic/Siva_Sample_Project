
CC = gcc
CFLAGS = -Wall -Wextra -g -Iinclude

all: test_suite

test_suite: src/main.c src/buffer_overflow.c src/memory_leak.c src/null_pointer_dereference.c src/uninitialized_variable.c src/division_by_zero.c src/double_free.c
	$(CC) $(CFLAGS) src/*.c -o build/test_suite

clean:
	rm -f build/*

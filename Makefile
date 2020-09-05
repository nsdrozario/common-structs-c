CC = gcc
CFLAGS = -c -Wall -Werror -fpic -Iinclude/
PREFIX = common_structs_

ifeq ($(OS), Windows_NT)
	LIB_SUFFIX = dll
else
	LIB_SUFFIX = so
endif

LDFLAGS = -L. -shared

%.o: src/%.c
	$(CC) $< -o $@ $(CFLAGS)

all: vector linked_list stack

vector: vector.o
	$(CC) vector.o -o $(PREFIX)vector.$(LIB_SUFFIX) $(LDFLAGS)

linked_list: linked_list.o 
	$(CC) linked_list.o -o $(PREFIX)linked_list.$(LIB_SUFFIX) $(LDFLAGS)

stack: linked_list stack.o 
	$(CC) stack.o -o $(PREFIX)stack.$(LIB_SUFFIX) $(LDFLAGS) -l$(PREFIX)linked_list




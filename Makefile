CC = gcc
CFLAGS = -Wall -Werror -fpic -Iinclude/common_structs_c/
PREFIX = common_structs_ # please don't change this

ifeq ($(OS), Windows_NT)
	LIB_SUFFIX = dll
else
	LIB_SUFFIX = so

LDFLAGS = -L. -shared

%.o: src/%.c
	$(CC) $< -o $@ $(CFLAGS)

vector: vector.o
	$(CC) vector.o -o $(PREFIX)vector.$(LIB_SUFFIX) $(LDFLAGS)

linked_list: linked_list.o 
	$(CC) linked_list.o $(PREFIX)linked_list.$(LIB_SUFFIX) $(LDFLAGS)

stack: linked_list stack.o 
	$(CC) stack.o $(PREFIX)stack.(LIB_SUFFIX) $(LDFLAGS) -l$(PREFIX)linked_list



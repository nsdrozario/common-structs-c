CC = gcc
CFLAGS = -c -Wall -Werror -fpic -Iinclude/
PREFIX = common_structs_

ifeq ($(OS), Windows_NT)
	LIB_SUFFIX = dll
else
	LIB_SUFFIX = so
endif

LDFLAGS = -L. -shared

INSTALL_DIR_LIB=/usr/lib/
INSTALL_DIR_HEADERS=/usr/include/

%.o: src/%.c
	$(CC) $< -o $@ $(CFLAGS)

all: vector linked_list stack queue

vector: vector.o
	$(CC) vector.o -o $(PREFIX)vector.$(LIB_SUFFIX) $(LDFLAGS)

linked_list: linked_list.o 
	$(CC) linked_list.o -o $(PREFIX)linked_list.$(LIB_SUFFIX) $(LDFLAGS)

stack: linked_list stack.o 
	$(CC) stack.o -o $(PREFIX)stack.$(LIB_SUFFIX) $(LDFLAGS) -l$(PREFIX)linked_list

queue: queue.o 
	$(CC) queue.o -o $(PREFIX)queue.$(LIB_SUFFIX) $(LDFLAGS)

graph: graph.o
	$(CC) graph.o -o $(PREFIX)graph.$(LIB_SUFFIX) $(LDFLAGS)

.PHONY: test
test: vector linked_list stack graph
	$(MAKE) -C $^

.PHONY: clean
clean:
	rm -rf *.exe 
	rm -rf *.o
	rm -rf *.dll
	rm -rf *.so

install: vector linked_list stack
	cp *.dll $(INSTALL_DIR_LIB)
	cp include $(INSTALL_DIR_HEADERS) -r
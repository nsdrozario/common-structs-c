CC = gcc
CFLAGS = -Wall -Werror -I../../../include/
PREFIX = common_structs_
LDFLAGS = -L../../../ -l$(PREFIX)vector

%.exe: %.c 
	$(CC) $< -o $@ $(CFLAGS) $(LDFLAGS)

.PHONY: build
build: push_back.exe resize.exe

.PHONY: clean
clean:
	rm -rf *.o
	rm -rf *.exe
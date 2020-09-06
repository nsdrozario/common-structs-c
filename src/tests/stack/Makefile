CC = gcc
CFLAGS = -Wall -Werror -I../../../include/
PREFIX = common_structs_
LDFLAGS = -L../../../ -l$(PREFIX)stack -l$(PREFIX)linked_list 

%.exe: %.c 
	$(CC) $< -o $@ $(CFLAGS) $(LDFLAGS)

.PHONY: buid
build: dfs.exe pop.exe push.exe

.PHONY: clean
clean:
	rm -rf *.o
	rm -rf *.exe
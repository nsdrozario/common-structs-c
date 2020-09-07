#ifndef COMMON_STRUCTS_LINKED_LIST_H
#define COMMON_STRUCTS_LINKED_LIST_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>

struct linked_list {

    struct linked_list *next;
    int value;

};

typedef struct linked_list linked_list;

// Constructor
linked_list *linked_list_create();

// Operations
void linked_list_union(linked_list *a, linked_list *b);
void linked_list_push_back(linked_list *l, int x);

// Destructor
void linked_list_delete(linked_list *l);

#ifdef __cplusplus
}
#endif

#endif

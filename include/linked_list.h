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

void linked_list_union(linked_list *a, linked_list *b);
void linked_list_delete_node(linked_list *a, int index);
void linked_list_insert(linked_list *a, int index, int val);
void linked_list_set_next(linked_list *a, int index, linked_list *b);
void linked_list_push_back(linked_list *l, int x);

#ifdef __cplusplus
}
#endif

#endif

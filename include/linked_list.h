#ifndef COMMON_STRUCTS_LINKED_LIST_H
#define COMMON_STRUCTS_LINKED_LIST_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>

struct ll_node {

struct ll_node* next;
void *val;

};

typedef struct ll_node ll_node;

typedef struct {

ll_node *start;
size_t size;

} linked_list;

void linked_list_add_to_end(linked_list* l, ll_node *n);

void linked_list_remove_node(linked_list *l, int n);

void linked_list_remove_recursive(linked_list *l, int n);

#ifdef __cplusplus
}
#endif

#endif

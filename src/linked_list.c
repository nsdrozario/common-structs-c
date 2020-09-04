#include <common_structs_c/linked_list.h>

linked_list *linked_list_create()
{
    linked_list *l = malloc(sizeof(linked_list));
    l->next = NULL;
    l->value = 0;
    return l;
}

void linked_list_delete(linked_list *l)
{
    linked_list *current_node = l;
    linked_list *previous_node = l;
    while (current_node != NULL) {
        previous_node = current_node;
        current_node = current_node->next;
        free(previous_node);
    }
}

void linked_list_union(linked_list *a, linked_list *b) {

    linked_list *current_node = a;
    while (current_node->next != NULL) {
        current_node = current_node->next;
    }
    current_node->next = b;
}

void linked_list_push_back(linked_list *l, int x) {
    linked_list *new_node = linked_list_create();
    new_node->value = x;
    linked_list_union(l, new_node);
}

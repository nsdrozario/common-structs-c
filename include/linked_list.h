#ifndef COMMON_STRUCTS_LINKED_LIST_H
#define COMMON_STRUCTS_LINKED_LIST_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {

ll_node *next = NULL;

} ll_node;

typedef struct {

ll_node *start = NULL;
size_t size;

} linked_list;

void linked_list_add_to_end(linked_list* l, node *n) {

  node *current_node = l->start;
  size_t size = 0;
  while(current_node->next != NULL) {
    size++;
    current_node = current_node->next;
  }
  current_node->next = n;
  size++;

}

// add null pointer guards to these functions later
void linked_list_remove_node(linked_list *l, int n) { // joins parent of nth element with child of nth element while removing nth element from the linked list
  
  node *parent_node = l->start;
  for (int i = 0; i < n-1; i++) {
    parent_node = parent_node->next;
  }
  parent_node->next = parent_node->next->next;
  
}

void linked_list_remove_recursive(linked_list *l, int n) { // this function isn't actually recursive it just deletes every node from the given index

  node *current_node = l->start;
  for (int i = 0; i < n; i++) {
    current_node = current_node->next;
  }
  
  current_node->next = NULL;
  
}

#ifdef __cplusplus
}
#endif

#endif

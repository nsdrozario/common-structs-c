#include <linked_list.h>

void linked_list_add_to_end(linked_list* l, ll_node *n) {

  ll_node *current_node = l->start;
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
  
  ll_node *parent_node = l->start;
  for (int i = 0; i < n-1; i++) {
    parent_node = parent_node->next;
  }
  parent_node->next = parent_node->next->next;
  
}

void linked_list_remove_recursive(linked_list *l, int n) { // this function isn't actually recursive it just deletes every node from the given index

  ll_node *current_node = l->start;
  for (int i = 0; i < n; i++) {
    current_node = current_node->next;
  }
  
  current_node->next = NULL;
  
}

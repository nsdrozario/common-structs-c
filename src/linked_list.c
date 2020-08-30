#include <linked_list.h>

void linked_list_union(linked_list *a, linked_list *b) {

  linked_list *node = a;
  while (a.next != NULL) {
    node = node.next;
  }
  a.next = b;

}

void linked_list_delete_node(linked_list *a, int index) {

  int i = index-1;
  linked_list *node = a;
  linked_list *b;

  while (i--) {
    node = node.next;
  }

  b = node.next.next;
  node.next = b;

}

void linked_list_insert(linked_list *a, int index, int val) {

  int i = index-1;
  linked_list *node = a;
  linked_list *b;
  b.value = val;

  while (i--) {
    node = node.next;
  }

  b.next = node.next.next;
  node.next = b;

}

void linked_list_set_next(linked_list *a, int index, linked_list *b) {

  int i = index;
  linked_list *node = a;

  while (i--) {
    node = node.next;
  }

  node.next = b;

}

void linked_list_push_back(linked_list *a, int x) {

  linked_list *b;
  b.value = x;
  linked_list_union(a, b);

}
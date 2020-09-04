#include <common_structs_c/linked_list.h>
#include <stdio.h>

int main () {

    linked_list *l = linked_list_create();
    linked_list *l0 = l;
    l->value = 0;
    for (int i = 1; i < 10; i++) {
        linked_list_push_back(l, i);
    }

    while(l != NULL) {
        printf("%d ", l->value);
        l = l->next;
    }

    linked_list_delete(l0);

    return 0;

}
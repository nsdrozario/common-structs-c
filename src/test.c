#include <linked_list.h>
#include <stdio.h>

int main () {

    int sum;
    linked_list *l;

    ll_node *a;
    ll_node *b;
    ll_node *c;

    int vals[3] = {1,2,3};
    a->val = &vals;
    b->val = &vals+1;
    c->val = &vals+2;

    linked_list_add_to_end(l, a);
    linked_list_add_to_end(l, b);
    linked_list_add_to_end(l, c);

    

    ll_node *n = l->start;
    
    while (n->next != NULL) {
        sum +=  *(int *) n->val;
    }

    printf("%d", &sum);

    return 0;

}
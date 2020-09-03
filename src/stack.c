#include <stack.h>

fast_stack *fast_stack_create() {

    fast_stack *s = malloc(sizeof(fast_stack));
    s->stack = linked_list_create();
    return s;

}

void fast_stack_push(fast_stack *f, int element) {

    linked_list *l = linked_list_create();
    l->value = element;
    l->next = f->stack;
    f->stack = l;

}

int fast_stack_front(fast_stack *f) {
    return f->stack->value;
}

void fast_stack_pop(fast_stack *f) {
    linked_list *node = f->stack;
    f->stack = f->stack->next; // again i don't think this actually conserves any space at all
    node->next=NULL;
    linked_list_delete(node);
}

void fast_stack_delete(fast_stack *f) {
    linked_list_delete(f->stack);
    free(f);
}
#include <common_structs_c/stack.h>

fast_stack *fast_stack_create() {

    fast_stack *s = malloc(sizeof(fast_stack));
    s->stack = NULL;
    s->size = 0;
    return s;

}

void fast_stack_push(fast_stack *f, int element) {

    linked_list *l = linked_list_create();
    l->value = element;
    l->next = f->stack;
    f->stack = l;
    f->size += 1;

}

int fast_stack_front(fast_stack *f) {
    return f->stack->value;
}

void fast_stack_pop(fast_stack *f) {
    linked_list *node = f->stack;
    f->stack = f->stack->next; // again i don't think this actually conserves any space at all
    node->next=NULL;
    linked_list_delete(node);
    f->size -= 1;
}

void fast_stack_delete(fast_stack *f) {
    linked_list_delete(f->stack);
    free(f);
}
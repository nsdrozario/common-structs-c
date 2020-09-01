#include <stack.h>

fast_stack *fast_stack_create() {

    fast_stack *s = malloc(sizeof(fast_stack));
    s->stack = malloc(sizeof(linked_list));
    s->size = 0;
    return s;

}

void fast_stack_push(fast_stack *f, int element) {

    linked_list *l; // i have a bad feeling about this i sense a segmentation fault because this will be allocated on the heap
    l->value = element;
    l->next = f->stack->next;
    f->stack = l;

}

int fast_stack_front(fast_stack *f) {
    return f->stack->value;
}

void fast_stack_pop(fast_stack *f) {
    f->stack = f->stack->next; // again i don't think this actually conserves any space at all
}

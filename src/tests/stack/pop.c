#include <stack.h>
#include <stdio.h>

int main () {

    fast_stack *f = fast_stack_create();
    fast_stack_push(f, 1);
    fast_stack_push(f, 2);
    fast_stack_push(f, 3);
    printf("%d", fast_stack_front(f));
    fast_stack_pop(f);
    printf("%d", fast_stack_front(f));

    fast_stack_delete(f);

    return 0;

}
#include <stack.h>
#include <stdio.h>

void dfs(linked_list *l) {

    printf("%d", l->value);

    if (l->next == NULL) {
        return;
    }

    dfs(l->next);

}

int main () {

    fast_stack *f = fast_stack_create();

    for (int i = 0; i < 10; i++) {
        fast_stack_push(f, i);
    }

    dfs(f->stack);
    
    fast_stack_delete(f);

    return 0;

}
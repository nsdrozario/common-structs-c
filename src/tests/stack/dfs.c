#include <common_structs_c/stack.h>
#include <stdio.h>
#include <stdbool.h>

/*

0 -> 1 -> 2 -> 3
|
V

4

*/

int adjlist[][2] = {

    {1, 4},
    {2, -1},
    {3, -1},
//    {-1, -1}

};

bool visited[4];

int main () {

    fast_stack *s = fast_stack_create();

    fast_stack_push(s, 0);

    while(s->size != 0) {
        int tmp = fast_stack_front(s);
        fast_stack_pop(s);
        if (!visited[tmp]) {
            visited[tmp] = true;
            printf("%d ", tmp);
            for (int i = 0; i < 2; i++) {
                if (adjlist[tmp][i] != -1 && !visited[adjlist[tmp][i]]) {
                    fast_stack_push(s, adjlist[tmp][i]);
                }
            }
        }
    }

    fast_stack_delete(s);

    return 0;

}

#include <common_structs_c/queue.h>
#include <stdio.h>
#include <stdbool.h>

int adjlist[7][3] = {
    {1,2,3},
    {5, 6, -1},
    {4, -1, -1},
    {-1, -1, -1},
    {-1, -1, -1},
    {-1, -1, -1},
    {-1, -1, -1}
};

/*
 
Graph structure:

            0      
      /     |      \
     1      2       3
    / \     |      
   5   6    4

Expected output: 0 1 2 3 5 6 4
 
*/

bool visited[7];

int main () {

    queue *q = create_queue();
    
    queue_push(q, 0);

    while (q->real_size != 0) {

        int current_node = queue_front(q);
        queue_pop(q);

        if (!visited[current_node]) {
            for (int i = 0; i < 3; i++) {
                if (adjlist[current_node][i] != -1) {
                    queue_push(q, adjlist[current_node][i]);
                }
            }
            printf("%d ", current_node);
        } 

    }

    delete_queue(q);
    return 0;

}
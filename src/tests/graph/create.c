#include <common_structs_c/graph.h>
#include <stdio.h>

int main () {

    printf("Creating graph...\n");
    lgraph *g = create_lgraph(10);
    printf("Removing graph...\n");
    delete_lgraph(g);

    return 0;

}
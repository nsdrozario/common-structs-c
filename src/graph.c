#include <common_structs_c/graph.h>

lgraph *create_lgraph(int nodes) {

    lgraph *g = malloc(sizeof(lgraph));
    g->nodes = nodes;
    g->edges = 0;
    g->connected_components = 0;
    g->adjlist = malloc(sizeof(int *) * nodes);

    return g;

}

void delete_lgraph(lgraph *g) {
    for (int i = 0; i < g->nodes; i++) {
        free(g->adjlist[i]);
    }
    free(g->adjlist);
    free(g);
}
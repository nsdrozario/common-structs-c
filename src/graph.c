#include <common_structs_c/graph.h>

lgraph *create_lgraph(int nodes) {

    lgraph *g = malloc(sizeof(lgraph));
    g->nodes = nodes;
    g->edges = 0;
    g->connected_components = 0;
    g->adjlist = malloc(sizeof(int *) * nodes);

    return g;

}

void lgraph_add_edge(lgraph* g, int node, int adj, bool bidirectional, uint8_t *error) {

    /*

    [Error codes]

    -1 = invalid nodes in edge

    */

    if (node >= g->nodes || adj >= g->nodes) {
        *error = -1;
        return;
    }

    

}

void delete_lgraph(lgraph *g) {
    for (int i = 0; i < g->nodes; i++) {
        free(g->adjlist[i]);
    }
    free(g->adjlist);
    free(g);
}
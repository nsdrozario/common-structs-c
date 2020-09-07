#ifndef COMMON_STRUCTS_GRAPH_H
#define COMMON_STRUCTS_GRAPH_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <stdbool.h>

typedef struct {

    int **adjlist;
    int nodes;
    int edges;
    int connected_components;
    
} adjlist_unweighted_graph;

typedef struct {
    bool **adjmatrix;
    int nodes;
    int edges;
    int connected_components;
} adjmatrix_unweighted_graph;

typedef struct {
    int **adjlist;
    int **weights;
    int nodes;
    int edges;
    int connected_components;
} adjlist_weighted_graph;

typedef struct {
    bool **adjmatrix;
    int **weights;
    int nodes;
    int edges;
    int connected_components;
} adjmatrix_weighted_graph;

// Shortened struct names
#define lgraph adjlist_unweighted_graph 
#define mgraph adjmatrix_unweighted_graph 
#define lgraph_w adjlist_weighted_graph 
#define mgraph_w adjmatrix_weighted_graph 

// Constructors
lgraph *create_lgraph(int nodes);
mgraph *create_mgraph(int nodes);
lgraph_w *create_lgraph_w(int nodes);
mgraph_w *create_mgraph_w(int nodes);

// Destructors
void delete_lgraph(lgraph *g);
void delete_mgraph(mgraph *g);
void delete_lgraph_w(lgraph_w *g);
void delete_mgraph_w(mgraph_w *g);

#ifdef __cplusplus
}
#endif
#endif
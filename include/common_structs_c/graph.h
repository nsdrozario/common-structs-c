#include <stdlib.h>

typedef struct {

int **adj_list;
int vertices;

} unweighted_graph;

typedef struct {

int **adj_matrix; // -1 if no edge exists

} weighted_graph;

typedef struct {

} array_2d; // implicit graph

// constructors
unweighted_graph *create_unweighted_graph();
weighted_graph *create_weighted_graph();

// destructors
void delete_unweighted_graph(unweighted_graph *g);
void delete_weighted_graph(weighted_graph *g);

// operations
void add_edge(unweighted_graph *g);
void add_edge(weighted_graph *g, int weight);

// algorithms
void dfs(int start_node, void(*callback)(int current_node)); // recursive implementation
void bfs(int start_node, void(*callback)(int current_node)); // need to implement queue for this one
void floodfill(int x, int y, void(*callback)(int current_node));
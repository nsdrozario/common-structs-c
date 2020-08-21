#include <stdlib.h>

typedef struct {
} unweighted_graph;

typedef struct {
} weighted_graph;

void dfs(int start_node, void(*callback)(int current_node));
void bfs(int start_node, void(*callback)(int current_node));

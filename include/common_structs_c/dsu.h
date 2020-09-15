#include <stdlib.h>

typedef struct {

  int **contents;
  int nodes;

} disjoint_set

// constructors
disjoint_set *disjoint_set_create();

// destructors
void disjoint_set_delete();

// operations

void disjoint_set_union(int a, int b);
void disjoint_set_find(int node);

#include <vector.h>
#include <stdio.h>

int main () {

    vector *v = vector_create(1);
    vector_resize(v, 3);

    printf("vector allocated size: %d", v->allocated_size);

    vector_delete(v);

    return 0;

}
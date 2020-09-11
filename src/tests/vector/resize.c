#include <common_structs_c/vector.h>
#include <stdio.h>

void alloc_check(uint8_t *error) {

    if (!(*error)) {
        printf("Allocation error\n");
        exit(-1);
    }

}

int main () {

    uint8_t *e = 0;
    vector *v = vector_create(1, &e);
    alloc_check(&e);
    vector_resize(v, 3, &e);
    alloc_check(&e);
    printf("vector allocated size: %d", v->allocated_size);

    vector_delete(v);

    return 0;

}
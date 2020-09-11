#include <common_structs_c/vector.h>
#include <stdio.h>

int main () {

    uint8_t create_vector_error = 0;
    vector *v = vector_create(0, &create_vector_error);

    if (!create_vector_error) {
        printf("Vector creation failed, exiting...\n");
        exit(-1);
    }

    uint8_t push_back_error = 0;
    for (int i = 0; i < 10; i++) {
        vector_push_back(v, i, &push_back_error);
        if (!push_back_error) {
            printf("Realloc failed while using vector_push_back(), exiting...\n");
            exit(-1);
        }
    }

    for (int i = 0 ; i < 10; i++) {

        uint8_t vector_index_error = 0;

        printf("%d ", vector_get(v, i, &vector_index_error));
        if (vector_index_error == VECTOR_INDEX_ERROR) {
            printf("Invalid index for accessing vector contents\n");
        }

    }

    vector_delete(v);

    return 0;

}
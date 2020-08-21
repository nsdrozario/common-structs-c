#include <vector.h>
#include <stdlib.h>

vector *vector_create(size_t s) {

    vector *v = malloc(sizeof(vector));
    v->contents = malloc(s * sizeof(void *));
    v->size = s;

    return v;

}

vector *vector_create() {

    vector *v = malloc(sizeof(vector));
    v->contents = malloc(0);
    v->size = 0;

    return v;

}

void vector_resize(vector *v, size_t s) {

    v->contents = realloc(v->contents, s * sizeof(void *));

}

void vector_push_back(vector *v, void *element) {

    // implement later

}

void vector_delete(vector *v) {
    free(v->contents);
    free(v);
}
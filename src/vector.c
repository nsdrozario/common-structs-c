#include <common_structs_c/vector.h>
#include <limits.h>

vector *vector_create(size_t s) {

    vector *v = malloc(sizeof(vector));
    v->contents = calloc(s, sizeof(int));
    v->allocated_size = s;
    v->size = 0;
    return v;

}

void vector_resize(vector *v, size_t s) {

    v->contents = realloc(v->contents, s * sizeof(int));
    v->allocated_size = s;

}

void vector_push_back(vector *v, int element) {

    if (v->allocated_size == v->size) { 
        vector_resize(v, ((v->allocated_size)+1) * sizeof(int)); 
    }

    v->contents[v->size] = element;
    v->size++;

}

int vector_get(vector *v, int index) {

    if (index >= v->size) {
        return INT_MIN;
    }

    return v->contents[index];

}

void vector_set(vector *v, int index, int val) {
    
    if (index >= v->allocated_size) {
        return;
    }

    v->contents[index] = val;

}

void vector_delete(vector *v) {
    free(v->contents);
    free(v);
}
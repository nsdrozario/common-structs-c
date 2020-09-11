#include <common_structs_c/vector.h>
#include <limits.h>

vector *vector_create(size_t s, uint8_t *error) {

    vector *v = malloc(sizeof(vector));

    if (v == NULL) {
        *error = VECTOR_ALLOC_ERROR;
        return NULL;
    }

    v->contents = calloc(s, sizeof(int));
    v->allocated_size = s;
    v->size = 0;
    *error = 0;
    return v;

}

void vector_resize(vector *v, size_t s, uint8_t *error) {

    int *tmp = realloc(v->contents, s * sizeof(int));
    if (tmp == NULL) {
        free(v->contents);
        v->allocated_size = 0;
        *error = VECTOR_ALLOC_ERROR;
        return;
    }

    *error = 0;
    v->contents = tmp;
    v->allocated_size = s;

}

void vector_push_back(vector *v, int element, uint8_t *error) {

    if (v->allocated_size == v->size) { 
        uint8_t e = 0;
        vector_resize(v, ((v->allocated_size)+1), &e);
        if (e == -1) {
            *error = VECTOR_ALLOC_ERROR;
            return;
        }
    }

    v->contents[v->size] = element;
    v->size++;
    *error = 0;

}

int vector_get(vector *v, int index, uint8_t *error) {

    if (index >= v->size) {
        
        *error = VECTOR_INDEX_ERROR;
        return INT_MIN;

    }

    return v->contents[index];

}

void vector_set(vector *v, int index, int val, uint8_t *error) {
    
    if (index >= v->allocated_size) {
        *error = VECTOR_INDEX_ERROR;
        return;
    }

    v->contents[index] = val;
    *error = 0;

}

void vector_delete(vector *v) {
    free(v->contents);
    free(v);
}
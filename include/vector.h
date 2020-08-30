#ifndef COMMON_STRUCTS_VECTOR_H
#define COMMON_STRUCTS_VECTOR_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <stddef.h>

typedef struct {

    int* contents;
    size_t size;
    size_t allocated_size;

} vector;

vector *vector_create(size_t s);
void vector_resize(vector *v, size_t s);
void vector_push_back(vector *v, int element);
void vector_delete(vector *v);
int vector_get(vector *v, int index);
void vector_set(vector *v, int index, int val);

#ifdef __cplusplus
}
#endif

#endif
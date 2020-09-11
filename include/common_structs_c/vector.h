#ifndef COMMON_STRUCTS_VECTOR_H
#define COMMON_STRUCTS_VECTOR_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

// error codes

#define VECTOR_ALLOC_ERROR -1
#define VECTOR_INDEX_ERROR -2

typedef struct {

    int* contents;
    size_t size;
    size_t allocated_size;

} vector;

// Constructor
vector *vector_create(size_t s, uint8_t *error);

// Operations
void vector_resize(vector *v, size_t s, uint8_t *error);
void vector_push_back(vector *v, int element, uint8_t *error);
int vector_get(vector *v, int index, uint8_t *error);
void vector_set(vector *v, int index, int val, uint8_t *error);

// Destructor
void vector_delete(vector *v);

#ifdef __cplusplus
}
#endif

#endif
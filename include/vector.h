#ifndef COMMON_STRUCTS_VECTOR_H
#define COMMON_STRUCTS_VECTOR_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {

    void ** contents;
    size_t size;

} vector;

vector *vector_create(size_t s);
vector *vector_create();
void vector_resize(vector *v, size_t s);
void vector_push_back(vector *v, void *element);
void vector_delete(vector *v);


#ifdef __cplusplus
}
#endif

#endif
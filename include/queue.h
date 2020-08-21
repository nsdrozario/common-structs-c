#ifndef COMMON_STRUCTS_QUEUE_H
#define COMMON_STRUCTS_QUEUE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>

typedef struct {

    void **contents;
    size_t allocated_size = 0;
    size_t real_size = 0;
    int front_index = 0;

} queue;

// constructors
queue *create_queue();
queue *create_queue(size_t s);

// destructors
void delete_queue(queue *q);

// operations
void *queue_front(queue *q);
void queue_pop(queue *q);
void queue_push(void *element);

#ifdef __cplusplus
}
#endif

#endif
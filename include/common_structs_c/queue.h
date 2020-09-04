#ifndef COMMON_STRUCTS_QUEUE_H
#define COMMON_STRUCTS_QUEUE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>

typedef struct {

    int *contents;
    size_t allocated_size;
    size_t real_size;
    int front_index;

} queue;


queue *create_queue();
queue *create_queue(size_t s);


void delete_queue(queue *q);


void *queue_front(queue *q);
void queue_pop(queue *q);
void queue_push(void *element);

#ifdef __cplusplus
}
#endif

#endif

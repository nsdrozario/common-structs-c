#ifndef COMMON_STRUCTS_QUEUE_H
#define COMMON_STRUCTS_QUEUE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <limits.h>

typedef struct {

    int *contents;
    size_t allocated_size;
    size_t real_size;
    int front_index;

} queue;


queue *create_queue();

void delete_queue(queue *q);

int queue_front(queue *q);
void queue_pop(queue *q);
void queue_push(queue *q, int element);

#ifdef __cplusplus
}
#endif

#endif

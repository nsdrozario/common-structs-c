#include <queue.h>

queue *create_queue() {

    queue *q = malloc(sizeof(queue));
    q->contents = malloc(0);
    q->allocated_size = 0;
    q->real_size = 0;

}

queue *create_queue(size_t s) {

    queue *q = malloc(sizeof(queue));
    q->contents = malloc(sizeof(int) * s);
    q->allocated_size = s;
    q->real_size = 0;

}

void *queue_front(queue *q) {

    return q->contents[q->front_index];

}

void queue_pop(queue *q) {

    q->front_index++;

}

void delete_queue(queue *q) {

    free(q->contents);

}

#include <common_structs_c/queue.h>

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

int queue_front(queue *q) {

    return q->contents[q->front_index];

}

void queue_pop(queue *q) {

    q->front_index++;

}

void queue_push(queue *q, int element) {

    if (q->real_size = q->allocated_size) {
        q->contents = realloc(q->contents, ++q->allocated_size);
    }

    q->contents[q->real_size] = element;
    q->real_size++;

}

void delete_queue(queue *q) {

    free(q->contents);
    free(q);

}

#ifndef COMMON_STRUCTS_QUEUE_H
#define COMMON_STRUCTS_QUEUE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>

typedef struct {

    void **contents;

} queue;

// operations
void *queue_front();
void *queue_pop();

#ifdef __cplusplus
}
#endif

#endif
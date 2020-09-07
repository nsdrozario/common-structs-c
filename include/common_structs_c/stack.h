#ifndef COMMON_STRUCTS_STACK_H
#define COMMON_STRUCTS_STACK_H
#ifdef __cplusplus
extern "C" {
#endif 

#include <common_structs_c/linked_list.h>

typedef struct {

    linked_list *stack;
    size_t size;

} fast_stack;

// Constructor
fast_stack *fast_stack_create();

// Destructor
void fast_stack_delete(fast_stack *f);

// Operations
void fast_stack_push(fast_stack *f, int element);
int fast_stack_front(fast_stack *f);
void fast_stack_pop(fast_stack *f);

#ifdef __cplusplus
}
#endif
#endif
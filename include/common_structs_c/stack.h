#ifndef COMMON_STRUCTS_STACK_H
#define COMMON_STRUCTS_STACK_H
#ifdef __cplusplus
extern "C" {
#endif 

#include <common_structs_c/linked_list.h>
#include <stdint.h>
    
typedef struct {

    linked_list *stack;
    size_t size;

} fast_stack;

typedef struct {
    
    size_t size;
    int *contents;
    
} array_stack; 
    
// Constructors
fast_stack *fast_stack_create();
array_stack *array_stack_create(uint8_t *error);
    
// Destructors
void fast_stack_delete(fast_stack *f);
void array_stack_delete();
    
// Operations
void fast_stack_push(fast_stack *f, int element);
int fast_stack_front(fast_stack *f);
void fast_stack_pop(fast_stack *f);

#ifdef __cplusplus
}
#endif
#endif

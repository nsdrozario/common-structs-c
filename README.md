# Common Structures for C

This is a library that has implementations for common data structures, intended for use in the C language.

## Currently supported structures
- [x] `vector`
    - [x] `vector_create()` (constructor)
    - [x] `vector_resize()`
    - [x] `vector_push_back()` (adds element to end of vector and resizes vector if needed)
    - [x] `vector_delete()` (destructor)
    - [x] `vector_get()` (indexing)
    - [x] `vector_set()` (indexing)
- [ ] `set`
- [ ] `map`
- [ ] `graph`
    - [ ] Depth-first search
    - [ ] Breadth-first search
- [ ] `array_2d` 
    - [ ] Floodfill
- [ ] `tree`
- [ ] `union_find`
    - [ ] Union
    - [ ] Find
- [ ] `queue`
    - [ ] Front
    - [ ] Pop
    - [ ] Push
- [ ] `stack`
    - [ ] Top
    - [ ] Pop
    - [ ] Push
- [ ] `priority_queue`
- [ ] `deque`
- [ ] `linked_list` (incomplete)
    - [ ] `linked_list_union()`
    - [ ] `linked_list_delete_node()` (deletes single node and joins nodes in between)
    - [ ] `linked_list_insert()` (creates node at index in between the adjacent indices)
    - [ ] `linked_list_set_next()` (sets the next pointer of the node at the index value)
    - [ ] `linked_list_push_back` (adds a node at the end of the list)

## Usage in C++
You can use this library in C++, but you probably should just use the C++ STL instead. It'll likely have more efficient implementations than
this library, and it's there for you to use anyway. However, you shouldn't use this library and the C++ STL at the same time, because you'll likely encounter name conflicts.

## Purpose
I am writing this library mainly as an exercise for understanding data structures more in-depth.

## License

This project is under the terms of the MIT License.

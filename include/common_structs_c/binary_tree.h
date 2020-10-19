#ifndef COMMON_STRUCTS_SET_H
#define COMMON_STRUCTS_SET_H

#ifdef __cplusplus
extern "C" {
#endif

struct btree {

    int content;
    struct btree *left;
    struct btree *right;

};

typedef struct btree binary_tree;

binary_tree *binary_tree_create();
void binary_tree_delete(binary_tree *b);

#ifdef __cplusplus
}
#endif

#endif
#include <common_structs_c/binary_tree.h>
#include <stdlib.h>

binary_tree *binary_tree_create() {
    binary_tree *b = malloc(sizeof(binary_tree));
    return b;
}

void binary_tree_delete(binary_tree *b) {

    if(b == NULL) {
        return;
    }

    if (b->left == NULL && b->right == NULL) {
        free(b);
    } else {
        binary_tree_delete(b->left);
        binary_tree_delete(b->right);
    }

}
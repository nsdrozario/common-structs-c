#include <vector.h>
#include <stdio.h>

int main () {

    vector *v = vector_create(0);

    for (int i = 0; i < 10; i++) {
        vector_push_back(v, i);
    }

    for (int i = 0 ; i < 10; i++) {

        printf("%d ", v->contents[i]);

    }

    vector_delete(v);

    return 0;

}
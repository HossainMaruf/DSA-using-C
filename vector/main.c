#include <stdio.h>
#include "vector.h"

void main() {
    Vector v;
    initialzeVector(&v);
    push_back(&v, 10);
    push_back(&v, 20);
    push_back(&v, 30);
    push_back(&v, 40);

    for(int i=0; i<size(&v); i++) {
        printf("%d ", v.data[i]);
    }
    printf("\n");

    erase(&v, 3);

    for(int i=0; i<size(&v); i++) {
        printf("%d ", v.data[i]);
    }
    printf("\n");
    erase(&v, 0);

    for(int i=0; i<size(&v); i++) {
        printf("%d ", v.data[i]);
    }
    printf("\n");

    freeVector(&v); // free the allocated memory
}
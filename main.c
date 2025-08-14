#include <stdio.h>
#include "queue.h"

void main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Size = %d\n", size()); // 3
    dequeue();
    dequeue();
    printf("Size = %d\n", size()); // 1
    dequeue();
    printf("Size = %d\n", size()); // 0
    enqueue(100);
    enqueue(200);
    enqueue(300);
    printf("First element = %d\n", first());
}
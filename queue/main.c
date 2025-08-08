#include <stdio.h>
#include "queue.h"

void main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Dec = %d\n", dequeue());
    printf("Dec = %d\n", dequeue());
    printf("Dec = %d\n", dequeue());
    printf("Dec = %d\n", dequeue());
    enqueue(30);
    printf("Dec = %d\n", dequeue());
}

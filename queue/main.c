#include <stdio.h>
#include "queue.h"

void main() {
    Queue q;
    initializeQueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    printf("Dec = %d\n", dequeue(&q));
    printf("Dec = %d\n", dequeue(&q));
    printf("Dec = %d\n", dequeue(&q));
    printf("Dec = %d\n", dequeue(&q));
    enqueue(&q, 30);
    printf("Dec = %d\n", dequeue(&q));
}

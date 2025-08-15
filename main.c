#include <stdio.h>
#include "queue/queue.h"

void main() {
    Queue q, q1;
    initializeQueue(&q);
    initializeQueue(&q1);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    printf("Size = %d\n", size(&q)); // 3
    dequeue(&q);
    dequeue(&q);
    printf("Size = %d\n", size(&q)); // 1
    dequeue(&q);
    printf("Size = %d\n", size(&q)); // 0
    enqueue(&q1, 100);
    enqueue(&q1, 200);
    enqueue(&q1, 300);
    printf("Size q1 = %d\n", size(&q1)); // 3
}
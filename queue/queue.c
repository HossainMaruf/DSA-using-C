#include <stdio.h>
#include "queue.h"

void initializeQueue(Queue* q) {q->front=-1, q->rear=-1; }
bool isEmpty(Queue* q) { return q->front==-1 && q->rear == -1; }
int size(Queue* q) { return q->rear+1; }
bool isFull(Queue* q) { return size(q) == QUEUE_SIZE ? 1 : 0; }
Type enqueue(Queue* q, Type item) {
    if(isFull(q)) return -1;
    if(isEmpty(q)) q->front = 0;
    return q->data[++q->rear] = item;
}
Type dequeue(Queue* q) {
    if(isEmpty(q)) return -1;
    else {
        Type temp = q->data[q->front];
        for(int i=q->front; i<q->rear; i++) {
            q->data[i] = q->data[i+1];
        }
        q->rear--;
        if(q->rear == -1) q->front = -1;
        return temp;
    }
}

Type first(Queue* q) { return isEmpty(q)? -1 : q->data[q->front]; }

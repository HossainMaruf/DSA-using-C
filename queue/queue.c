#include "queue.h"

int front = -1, rear = -1;
Type queue[QUEUE_SIZE];
int isEmpty(void) { return (front == -1) && (rear == -1); }
int size(void) { return rear+1; }
int isFull(void) { return (size() == QUEUE_SIZE) ? 1 : 0; }

Type enqueue(Type item) {
    if(isFull()) return -1; // no space for enqueue
    if(isEmpty()) front = 0; // first time push so front should be 0
    return queue[++rear] = item;  // enqueue the item and return it
}

Type dequeue(void) {
    if (isEmpty()) return -1;
    else {
        // so take the front in temp
        Type temp = queue[front];
        // Shift left all the elements by 1 index 
        for(int i=front; i< rear; i++) queue[i] = queue[i+1];
        rear--; // decrease the rear value
        if(rear == -1) front = -1;
        return temp;
    }
}

Type first(void) { return isEmpty() ? -1 : queue[front]; }
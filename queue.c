#include <stdio.h>
#include <stdbool.h>
#define QUEUE_SIZE 50

int front = -1, rear = -1;
typedef int Type;
Type queue[QUEUE_SIZE];

bool isEmpty() { return front==-1 && rear == -1; }
int size() { return rear+1; }
bool isFull() { return size() == QUEUE_SIZE ? 1 : 0; }
Type enqueue(Type item) {
    if(isFull()) return -1;
    if(isEmpty()) front = 0;
    return queue[++rear] = item;
}
Type dequeue() {
    if(isEmpty()) return -1;
    else {
        Type temp = queue[front];
        for(int i=front; i<rear; i++) {
            queue[i] = queue[i+1];
        }
        rear--;
        if(rear == -1) front = -1;
        return temp;
    }
}

Type first() { return isEmpty()? -1 : queue[front]; }
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
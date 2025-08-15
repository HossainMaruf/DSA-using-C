#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

#define QUEUE_SIZE 50
typedef int Type;

typedef struct {
    int front, rear;
    Type data[QUEUE_SIZE];
} Queue;

extern void initializeQueue(Queue*);
extern bool isEmpty(Queue*);
extern int size(Queue*);
extern bool isFull(Queue*);
extern Type enqueue(Queue*, Type); 
extern Type dequeue(Queue*); 
extern Type first(Queue*);

#endif
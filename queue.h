#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>
#define QUEUE_SIZE 50

extern int front; 
extern int rear;
typedef int Type;
extern Type queue[QUEUE_SIZE];

extern bool isEmpty(void);
extern int size(void);
extern bool isFull(void);
extern Type enqueue(Type); 
extern Type dequeue(void); 
extern Type first(void);

#endif
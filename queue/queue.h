#ifndef QUEUE_H
#define QUEUE_H

#define QUEUE_SIZE 50

typedef int Type;

extern int front, rear;
extern Type queue[QUEUE_SIZE];
extern int isEmpty(void);
extern int size(void);
extern int isFull(void);
extern Type enqueue(Type);
extern Type dequeue(void);
extern Type first(void);

#endif
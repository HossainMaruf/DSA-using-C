#ifndef QUEUE_H
#define QUEUE_H

#define QUEUE_SIZE 50

typedef int Type;

extern int front, rear;
extern Type queue[QUEUE_SIZE];
extern int isEmpty(void);
extern int size(void);
extern int enqueue(Type);
extern int dequeue(void);
extern int first(void);

#endif
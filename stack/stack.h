#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 50

typedef int Type;
typedef struct {
    int top;
    Type data[STACK_SIZE];
} Stack;

extern void initializeStack(Stack*);
extern int isEmpty(Stack*);
extern int size(Stack*);
extern int isFull(Stack*);
extern Type push(Stack*, Type);
extern Type pop(Stack*);
extern Type peek(Stack*);

#endif
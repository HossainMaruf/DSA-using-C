#ifndef STACK_H
#define STACK_H
#include <stdbool.h>
#define STACK_SIZE 50

typedef int Type;
typedef struct {
    int top;
    Type data[STACK_SIZE];
} Stack;

extern void initializeStack(Stack*);
extern bool isEmpty(Stack*);
extern int size(Stack*);
extern bool isFull(Stack*);
extern Type push(Stack*, Type);
extern Type peek(Stack*);
extern Type pop(Stack*);

#endif
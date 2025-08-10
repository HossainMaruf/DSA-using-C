#ifndef STACK_H
#define STACK_H
#include <stdbool.h>
#define STACK_SIZE 50

typedef int Type;
extern int top;
extern Type stack[STACK_SIZE];

extern bool isEmpty(void);
extern int size(void);
extern bool isFull(void);
extern Type push(Type);
extern Type peek(void);
extern Type pop();

#endif
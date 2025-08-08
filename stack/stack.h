#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 50

typedef int Type;

extern int top;
extern Type stack[STACK_SIZE];
extern int isEmpty(void);
extern int size(void);
extern int isFull(void);
extern Type push(Type);
extern Type pop(void);
extern Type peek(void);

#endif
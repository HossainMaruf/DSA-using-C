#include "stack.h"

void initializeStack(Stack *st) { st->top = -1; }
int isEmpty(Stack *st) { return st->top == -1; }
int size(Stack *st) { return (st->top)+1; }
int isFull(Stack *st) { return (size(st) == STACK_SIZE) ? 1 : 0; }

Type push(Stack *st, Type item) {
    if(isFull(st)) return -1; // no space for push
    return st->data[++(st->top)] = item;  // push the item
}

Type pop(Stack *st) {
    if (isEmpty(st)) return -1;
    else return st->data[(st->top)--];
}

Type peek(Stack *st) { return isEmpty(st) ? -1 : st->data[st->top]; }
#include <stdbool.h>
#include "stack.h"

void initializeStack(Stack* st) { st->top = -1; }
bool isEmpty(Stack* st) { return st->top == -1; }
int size(Stack* st) { return (st->top)+1; }
bool isFull(Stack* st) { return size(st) == STACK_SIZE; }
Type push(Stack* st, Type data) {
    if(isFull(st)) return -1; // unsuccesful
    return st->data[++st->top] = data;
}
Type peek(Stack* st) { 
    if(isEmpty(st)) return -1;
    return st->data[st->top];
}

Type pop(Stack* st) {
    if(isEmpty(st)) return -1;
    return st->data[st->top--];
}

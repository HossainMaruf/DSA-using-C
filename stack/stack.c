#include "stack.h"

int top = -1;
Type stack[STACK_SIZE];
int isEmpty(void) { return top == -1; }
int size(void) { return top+1; }
int isFull(void) { return (size() == STACK_SIZE) ? 1 : 0; }

Type push(Type item) {
    if(isFull()) return -1; // no space for push
    return stack[++top] = item;  // push the item
}

Type pop(void) {
    if (isEmpty()) return -1;
    else return stack[top--];
}

Type peek(void) { return isEmpty() ? -1 : stack[top]; }
#include <stdbool.h>
#include "stack.h"


int top = -1;
Type stack[STACK_SIZE];

bool isEmpty() { return top == -1; }
int size() { return top+1; }
bool isFull() { return size() == STACK_SIZE; }
Type push(Type data) {
    if(isFull()) return -1; // unsuccesful
    return stack[++top] = data;
}
Type peek() { 
    if(isEmpty()) return -1;
    return stack[top];
}

Type pop() {
    if(isEmpty()) return -1;
    return stack[top--];
}

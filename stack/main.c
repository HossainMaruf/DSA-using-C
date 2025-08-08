#include <stdio.h>
#include "stack.h"

void main() {
    push(10);
    push(20);
    push(30);
    printf("Size = %d\n", size());
    printf("Pop = %d\n", pop());
    printf("Pop = %d\n", pop());
    printf("Pop = %d\n", pop());
    printf("Size = %d\n", size());
    printf("Pop = %d\n", pop());
    printf("Size = %d\n", size());
    push(30);
    printf("Size = %d\n", size());
    printf("Pop = %d\n", pop());
    printf("Size = %d\n", size());
}

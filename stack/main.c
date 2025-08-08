#include <stdio.h>
#include "stack.h"

void main() {
    Stack st1, st2;
    initializeStack(&st1);
    initializeStack(&st2);
    push(&st1, 10);
    push(&st2, 20);
    push(&st1, 30);
    // printf("Pop = %d\n", pop(&st));
    // printf("Pop = %d\n", pop(&st));
    // printf("Pop = %d\n", pop(&st));
    // printf("Pop = %d\n", pop(&st));
    // printf("Size = %d\n", size(&st));
    // printf("Pop = %d\n", pop(&st));
    // printf("Size = %d\n", size(&st));
    // push(&st, 30);
    // printf("Size = %d\n", size(&st));
    // printf("Pop = %d\n", pop(&st));
    // printf("Size = %d\n", size(&st));

    // Print Stack Item
    while(!isEmpty(&st1)) printf("%d ", pop(&st1));
    printf("\n");
    while(!isEmpty(&st2)) printf("%d ", pop(&st2));
}

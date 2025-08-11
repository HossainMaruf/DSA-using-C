#include <stdio.h>
#include "stack.h"

void main() {
   Stack st, st2;
   initializeStack(&st);
   initializeStack(&st2);
   push(&st, 10);
   push(&st2, 20); 
   push(&st2, 30); 
   printf("Size = %d\n", size(&st)); // 1
   printf("Size = %d\n", size(&st2)); // 2
   printf("Pop = %d\n", pop(&st)); // 10
   printf("Pop = %d\n", pop(&st2)); // 30
   printf("Pop = %d\n", pop(&st)); // -1
   push(&st2, 100);
   push(&st2, 200);
   push(&st2, 300);
   printf("Pop = %d\n", pop(&st2));
   printf("Pop = %d\n", pop(&st2));
   printf("Size = %d\n", size(&st2)); // 2
   printf("Peek = %d\n", peek(&st2)); // 100
}
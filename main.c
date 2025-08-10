#include <stdio.h>
#include "stack.h"

void main() {
   push(10);
   push(20); 
   printf("Size = %d\n", size());
   printf("Pop = %d\n", pop());
   printf("Pop = %d\n", pop());
   printf("Pop = %d\n", pop());
   push(100);
   push(200);
   push(300);
   printf("Pop = %d\n", pop());
   printf("Pop = %d\n", pop());
   printf("Size = %d\n", size());
   printf("Peek = %d\n", peek());
}
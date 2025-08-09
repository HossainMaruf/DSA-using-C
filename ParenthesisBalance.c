#include <stdio.h>
#include <stdbool.h>
#include "stack/stack.h"

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
            ((open == '{' && close == '}') ||
            open == '[' && close == ']'); 
}

void main() {
//    char str[] = "{[()]}";
//    char str[] = "{[(])}";
//    char str[] = "{{[[(())]]}}";
//    char str[] = "{(())";
   char str[] = "(())}";
   bool isBalance = true;
   Stack st;
   initializeStack(&st);
   for(int i=0; str[i] != '\0'; i++) {
    if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
        push(&st, str[i]);
    }
    if(str[i] == ')' || str[i] == '}' || str[i] == ']') {
        if(!isMatching(pop(&st), str[i]) || isEmpty(&st)) {
            isBalance = false;
            break;
        }
    }
   }
   if(isBalance == true && isEmpty(&st)) printf("Balanced");
   else printf("Not Balanced");
}
#include <stdio.h>
#include "stack.h"

bool isMatching(char left, char right) {
    return (left=='(' && right == ')') ||
            (left=='{' && right == '}') ||
            (left=='[' && right == ']');
}

void main() {
    Stack st;
    initializeStack(&st);
    // char str[] = "[{()}]";
    // char str[] = "{[(])}"
    // char str[] = "{{[[(())]]}}";;
    // char str[] = "{(())";
    // char str[] = "(())}";

    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
            push(&st, str[i]);
        }
        if(str[i] == ')' || str[i] == '}' || str[i] == ']') {
            if(!isMatching(pop(&st), str[i])) {
                printf("Not Balanced Parenthesis Sequence\n");
                return;
            }
        }
    }
    if(isEmpty(&st))
        printf("Balanced Parenthesis\n");
    else printf("Not Balanced\n");
}
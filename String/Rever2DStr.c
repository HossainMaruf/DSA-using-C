#include <stdio.h>
#include <ctype.h>

int str_len(char str[]) {
    int i=0;
    while(str[i] != '\0') i++;
    return i;
}

void str_rev(char str[]) {
    int i=0, j = str_len(str)-1;
    while(i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

void main() {
    char str[3][32] = {"Apple", "Banana", "Orange"};
    for(int i=0; i<3; i++) printf("%s ", str[i]);
    printf("\n");
    // reverse list as well as words
    while
    for(int i=2; i>-1; i--) {
        str_rev(str[i]);
    }
    for(int i=0; i<3; i++) printf("%s ", str[i]);
    printf("\n");
}
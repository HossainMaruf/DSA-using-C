#include <stdio.h>
#include <string.h>

char* strReverse(char str[]) {
    for(int i=0, j=strlen(str)-1; i<j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}

void main() {
    char arr[] = "Maruf";
    printf("%s\n", strReverse(arr));
    printf(arr);

    return;
}
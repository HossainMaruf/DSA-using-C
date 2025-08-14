#include <stdio.h>
#include <string.h>

void main() {
    char str[10] = "adc1a2";
    int len = strlen(str);
    for(int i=0; i<len; i++) {
        for(int j=0; j<len-1; j++) {
            if(str[j] > str[j+1]) {
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    printf(str);
}
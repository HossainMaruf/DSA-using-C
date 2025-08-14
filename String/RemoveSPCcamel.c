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

void removeSPCandMakeCamel(char str[]) {
    int read=0, write=0;
    while(str[read] != '\0') {
        if(str[read] != ' ') {
            str[write] = str[read];
            read++; write++;
        } else {
            // space
            str[read+1] = toupper(str[read+1]);
            read++;
        }
    }
    str[0] = toupper(str[0]); // uppercase of first char
    str[write] = '\0';
}

void reverseListOfString(char list[][32]) {

}

void main() {
    char str[3][32] = {"Dhaka", "Khulna", "Barishal"};
    int i=0, j=2;
    while(i != j) {
        char temp[] = str[i];
        str[i] = str[j];
    }


    printf(str);
}
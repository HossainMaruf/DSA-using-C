#include <stdio.h>
#include <string.h>

void main() {
    char* name1 = "Maruf";
    char* name2 = "maruf";
    char* name3 = "Maruf";

    printf("%d\n", strcmp(name1, name2)); // name1 < name2 = -1
    printf("%d\n", strcmp(name1, name3)); // name1 = name2 = 0
    printf("%d\n", strcmp(name2, name1)); // name2 = name1 = 1

    return;
}
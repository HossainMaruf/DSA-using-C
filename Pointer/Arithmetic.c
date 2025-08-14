#include <stdio.h>
void main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d\n", arr);
    printf("%d\n", &arr);
    printf("%d\n", &arr[0]);

    printf("%d\n", *arr);
    printf("%d\n", *&arr[0]);


    printf("%d\n", *arr+2); // Increment
    printf("%d\n", (*arr)+10);
    printf("%d\n", *&arr);

    printf("%d\n", &arr[4] - arr);
    printf("%d\n", arr == &arr[0]);
    printf("%d\n", arr == *&arr);

    return;
}
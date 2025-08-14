#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[3][2] = {{1, 2}, {5, 6}, {0, -1}};
    printf("%d\n", arr);
    printf("%d\n", arr+1);
    printf("%d\n", arr+2);

    printf("%d\n", **(arr)); // arr is row
    printf("%d\n", **(arr+1));
    printf("%d\n", **(arr+2));

    printf("%d\n", *(*(arr)+1));
    printf("%d\n", *(*(arr+1)+1));
    printf("%d\n", *(*(arr+2)+1));
    return 0;
}

#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;
    while (i < j)
    {
        while(A[i] <= pivot) i++;
        while(A[j] > pivot) j--;
        if(i < j) { swap(&A[i], &A[j]); }
    }
    // Swapping
    swap(&A[j], &A[l]); 
    return j;
}

void QuickSort(int A[], int l, int h) {
    if(l < h) {
        int j = partition(A, l, h);
        QuickSort(A, l, j-1);
        QuickSort(A, j+1, h);
    }
}

void main()
{
    int A[] = {10, 16, 8, 12, 15, 6, 3, 9, 5};
    int length = sizeof(A) / sizeof(A[0]);
    QuickSort(A, 0, length-1);

    // After sorting
    for(int i=0; i<length; i++) {
        printf("%d ", A[i]);
    }

    return;
}
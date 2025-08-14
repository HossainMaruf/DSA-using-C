#include <stdio.h>

void printArray(int arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int partition(int arr[], int l, int h) {
  int pivot = arr[l];
  int i=l, j=h;
  while(i < j) {
    do {
      i++;
    } while(arr[i] <= pivot);
    do {
      j--;
    } while(arr[j] > pivot);
    if(i < j) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  return j;
}

void QuickSort(int arr[], int l, int h) {
  if(l < h) {
    int p = partition(arr, l, h);
    QuickSort(arr, l, p-1);
    QuickSort(arr, p+1, h);
  }
}

int main() {

  int arr[] = {10,16,8,12,15,6,3,9,5};
  int len = sizeof(arr) / sizeof(arr[0]);

  printArray(arr, len);
  QuickSort(arr, 0, len-1);
  printArray(arr, len);

  return 0;
}
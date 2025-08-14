#include <stdio.h>


void printArray(int arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {-4, 7, 3, 6, -1, 2, 5};
  int len = sizeof(arr) / sizeof(arr[0]);

  printArray(arr, len);

  for(int i=0; i<len-1; i++) {
    for(int j=i+1; j<len; j++) {
      if(arr[j] < arr[i]) {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
  printArray(arr, len);

  return 0;
}
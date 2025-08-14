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
  int arr[] = {4, 7, 3, 6, -1, 2, 5};
  int len = sizeof(arr) / sizeof(arr[0]);

  printArray(arr, len);

  for(int i=1; i<len; i++) {
    int key = arr[i];
    for(int j=0; j<i; j++) {
      if(key < arr[j]) {
        for(int k=i; k>j; k--) {
          arr[k] = arr[k-1];
        }
        arr[j] = key;
        break;
      }
    }
  }

  printArray(arr, len);

  return 0;
}
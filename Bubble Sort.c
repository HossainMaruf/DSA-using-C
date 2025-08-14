#include <stdio.h>

void printArray(int arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main()
{
  int arr[] = {4, 7, 3, 6, -1, 2, 5};
  int len = sizeof(arr) / sizeof(arr[0]);
  printArray(arr, len);

  for (int i = 0; i < len - 1; i++)
  {
    for (int j = 0; j < len - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  printArray(arr, len);

  return 0;
}
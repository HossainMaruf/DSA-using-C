#include <stdio.h>

void merge(int A[], int B[], int m, int n) {
  int C[m+n];
  int i=0, j=0, k=0;
  while(i<m && j<n) {
    if(A[i] < B[j]) C[k++] = A[i++];
    else C[k++] = B[j++];
  } 

  for(; i<m; i++) C[k++] = A[i];
  for(; j<n; j++) C[k++] = B[j];

  for(int p=0; p<m+n; p++) {
    printf("%d ", C[p]);
  }

}

int main() {
  int A[] = {1, 10, 24, 128};
  int m = sizeof(A) / sizeof(A[0]);
  int B[] = {3, 12, 32, 2333};
  int n = sizeof(B) / sizeof(B[0]);
  merge(A, B, m, n);

  return 0;
}
#include <bits/stdc++.h>
using namespace std;


int main() {
  const int v = 5, e = 7;
  const int size = v + (2*e) + 2;
  int g[size], mark = v+2, adj;
  for(int i=1; i<=v; i++) {
    g[i] = mark;
    printf("Enter number of adjacent of %d: ", i);
    scanf("%d", &adj);
    printf("Enter the values: ");
    for(int j=0; j<adj; j++) {
      scanf("%d", &g[mark++]);
    }
  }
  g[v+1] = mark;

  for(int i=1; i<size; i++) {
    printf("%d ", g[i]);
  }


  return 0;
}
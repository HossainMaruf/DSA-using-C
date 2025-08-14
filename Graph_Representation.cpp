#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> g[], int u, int v) {
  g[u].push_back(v);
  g[v].push_back(u);
}

int main() {

  vector<int> g[6];
  addEdge(g, 1, 2);
  addEdge(g, 1, 3);
  addEdge(g, 1, 4);
  addEdge(g, 2, 3);
  addEdge(g, 3, 4);
  addEdge(g, 3, 5);
  addEdge(g, 4, 5);

  for(int i=1; i<6; i++) {
    for(auto ele : g[i]) {
      printf("%d ", ele);
    }
    printf("\n");
  }


  return 0;
}
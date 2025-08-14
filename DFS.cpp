#include <bits/stdc++.h>
using namespace std;

void DFS(vector<int> g[], int u) {
  bool visited[8] = {0};
  stack<int> st;
  // for(int i=0; i<8; ++i) {
  //   printf("%d ", visited[i]);
  // }
  st.push(u);
  visited[u] = 1;
  while(!st.empty()) {
    u = st.top();
    st.pop();
    printf("%d ", u);
    for(auto v: g[u]) {
      if(visited[v] == 0) {
        st.push(v);
        visited[v] = 1;
      }
    }
  }
}

void addEdge(vector<int> g[], int u, int v) {
  g[u].push_back(v);
  g[v].push_back(u);
}

int main() {
  vector<int> g[8];
  addEdge(g, 1, 2);
  addEdge(g, 1, 3);
  addEdge(g, 1, 4);
  addEdge(g, 2, 3);
  addEdge(g, 3, 4);
  addEdge(g, 3, 5);
  addEdge(g, 4, 5);
  addEdge(g, 5, 6);
  addEdge(g, 5, 7);

  DFS(g, 1);

  return 0;
}
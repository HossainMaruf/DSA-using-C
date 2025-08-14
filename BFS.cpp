#include <iostream>
#include <queue>
using namespace std;

int BFS(bool G[][11], int s) {
  bool visited[11] = {0};
  int level[11] = {0};
  int prev[11];
  prev[1] = -1;
  queue<int> q; 
  q.push(s);
  level[s] = 0;
  visited[s] = 1;

  while(!q.empty()) {
    int u = q.front();
    cout << u << " " << level[u] << endl;
    q.pop();
    for(int i=1; i<11; i++) {
      if(G[u][i] == 1 && visited[i] == 0) {
        q.push(i);
        level[i] = level[u] + 1;
        prev[i] = u;
        visited[i] = 1;
      } 
    }
  }

  int dest = 10;
  while(prev[dest] != -1) {
    cout << prev[dest] << " ";
    dest = prev[dest];
  }

  return 10;
}

int main() {

  bool G[11][11] = 
  {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0},
    {0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1},
    {0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0}
  };

  BFS(G, 1);


  return 0;
}
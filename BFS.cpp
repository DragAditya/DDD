#include <iostream>
#include <queue>
using namespace std;

class BSFTree {
  int a[20][20], visited[20], n;

public:
  void bfs(int);
  void get();
};

void BSFTree::get() {
  cout << "Enter The Size Of Matrix/Nodes : " << endl;
  cin >> n;

  cout << "Enter Adjacent Matrix : " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    visited[i] = 0;
  }
  bfs(0);
}

void BSFTree::bfs(int start) {
  queue<int> q;
  q.push(start);
  visited[start] = 1;

  while (!q.empty()) {
    int v = q.front();
    q.pop();
    cout << "\t" << v + 1;

    for (int i = 0; i < n; i++) {
      if (a[v][i] == 1 && !visited[i]) {
        q.push(i);
        visited[i] = 1;
      }
    }
  }
}

int main() {
  BSFTree x;
  x.get();
  return 0;
}

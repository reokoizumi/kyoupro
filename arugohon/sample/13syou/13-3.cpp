#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

vector<int> BFS(const Graph &G, int s) {
  int N = (int)G.size();
  vector<int> dist(N, -1);
  queue<int> que;

  dist[0] = 0;
  que.push(0);

  while (!que.empty()) {
    int v = que.front();
    que.pop();

    for (int x : G[v]) {
      if (dist[x] != -1) continue;

      dist[x] = dist[v] + 1;
      que.push(x);
    }
  }
  return dist;
}

int main() {
  int N, M;
  cin >> N >> M;
  Graph G(N);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  vector<int> dist = BFS(G, 0);
  for (int v = 0; v < N; v++) {
    cout << v << ": " << dist[v] << endl;
  }
  return 0;
}

/*



*/
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

vector<int> color;
bool dfs(const Graph &G, int v, int cur = 0) {
  color[v] = cur;
  for (auto next_v : G[v]) {
    if (color[next_v] != -1) {
      if (color[next_v] == cur) return false;
      continue;
    }
    if (!dfs(G, next_v, 1 - cur)) return false;
  }
  return true;
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

  color.assign(N, -1);
  bool is_bipartite = true;
  for (int v = 0; v < N; v++) {
    if (color[v] != -1) {
      continue;
    }
    if (!dfs(G, v)) {
      is_bipartite = false;
    }
  }
  if (is_bipartite) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

/*



*/
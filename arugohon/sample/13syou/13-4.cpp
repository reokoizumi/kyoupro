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

vector<bool> seen;
void dfs(const Graph &G, int v) {
  seen[v] = true;
  
  for (auto next_v : G[v]) {
    if (seen[next_v]) continue;
    dfs(G, next_v);
  }
}

int main() {
  int N, M, s, t;
  cin >> N >> M >> s >> t;

  Graph G(N);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
  }
  seen.assign(N, false);
  dfs(G, s);
  if (seen[t]) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

/*



*/ 
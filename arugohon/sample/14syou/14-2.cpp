#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  else return false;
}
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
const ll INF = 1LL << 60;
double PI = 3.141592653589793238;

struct Edge {
  int to;
  ll w;
  Edge(int to, ll w) : to(to), w(w) {}
};



int main() {
  int N, M, s;
  cin >> N >> M >> s;

  Graph G(N);
  for (int i = 0; i < M; i++) {
    int a, b, w;
    cin >> a >> b >> w;
    G[a].push_back(Edge(b, w));
  }

  bool exist_negative_cycle = false;
  vector<ll> dist(N, INF);
  dist[s] = 0;
  for (int iter = 0; iter < N; iter++) {
    bool update = false;
    for (int v = 0; v < N; v++) {
      if (dist[v] == INF) continue;

      for (auto e : G[v]) {
        if (chmin(dist[e.to], dist[v] + e.w)) {
          update = true;
        }
      }
    }
    if (!update) break;
    if (iter == N - 1 && update) {
      exist_negative_cycle = true;
    }
  }

  if (exist_negative_cycle) cout << "NEGATIVE CYCLE" << endl;
  else {
    for (int v = 0; v < N; v++) {
      if (dist[v] < INF) {
        cout << dist[v] << endl;
      }
      else {
        cout << "INF" << endl;
      }
    }
  }

  return 0;
}

/*



*/
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { 
  if (a > b) {
    a = b;
    return true;
  }
  else return false;
}
struct Edge {
  int to;
  ll w;
  Edge(int to, ll w) : to(to), w(w) {}
};
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
const ll INF = 1LL << 60;
double PI = 3.141592653589793238;

int main() {
  int N, M, s;
  cin >> N >> M >> s;
  return 0;
}

/*



*/
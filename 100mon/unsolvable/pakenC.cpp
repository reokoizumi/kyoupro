#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int> (m));
  rep(i, n) {
    rep(j, m) {
      cin >> a[i][j];
    }
  }
  ll ans = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
       ll cnt = 0;
       for (int k = 0; k < n; k++) {
         cnt += max(a[k][i], a[k][j]);
       }
       ans = max(ans, cnt);
    }
  }
  cout << ans << endl;
} 
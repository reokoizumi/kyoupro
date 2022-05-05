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
  int n, m, c;
  cin >> n >> m >> c;
  vector<int> b(m);
  vector<vector<int>> a(n, vector<int>(m));
  rep(i, m) cin >> b[i];
  rep(i, n) rep(j, m) cin >> a[i][j];
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int res = 0;
    for (int j = 0; j < m; j++) {
      res += a[i][j] * b[j];
    }
    if (res+c > 0) {
      ans++;
    }
  }
  cout << ans << endl;
}
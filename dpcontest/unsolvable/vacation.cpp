#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
// const int INF = 1e+8;
const long long INF = 1LL << 60;
double PI = 3.141592653589793238;

int main() {
  int N;
  cin >> N;
  vector<vector<ll>> a(N + 1, vector<ll>(3));
  rep(i, N){
    rep(j, 3) {
      cin >> a[i][j];
    }
  }

  vector<vector<ll>> dp(N + 1, vector<ll>(3));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (j == k) continue;
        dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + a[i][k]);
      }
    }
  }
  ll res = 0;
  for (int i = 0; i < 3; i++) {
    res = max(res, dp[N][i]);
  }
  cout << res << endl;

}
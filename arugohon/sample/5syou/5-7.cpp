#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

template<class T> void chmax(T& a, T b) {
  if (a < b) {
    a = b;
  }
}


int main() {
  int n;
  ll W;
  cin >> n >> W;
  vector<ll> weight(n);
  vector<ll> value(n);
  rep(i, n) cin >> weight[i] >> value[i];

  vector<vector<ll>> dp(n + 1, vector<ll>(W + 1, 0));

  for (int i = 0; i < n; i++) {
    for (int w = 0; w <= W; w++) {
      if (w - weight[i] >= 0) {
        chmax(dp[i + 1][w], dp[i][w - weight[i]] + value[i]);
      }
      chmax(dp[i + 1][w], dp[i][w]);
    }
  }

  cout << dp[n][W] << endl;

  return 0;
}


/*

n W
weight value


6 9
2 3 1 2 3 6 2 1 1 3 5 85

ans 94

*/
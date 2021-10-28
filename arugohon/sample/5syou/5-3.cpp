#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
// const int INF = 1e+8;
double PI = 3.141592653589793238;

const ll INF = 1LL << 60;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}


int main() {
  int n;
  cin >> n;
  vector<ll> h(n);
  rep(i, n) cin >> h[i];

  vector<ll> dp(n, INF);

  dp[0] = 0;
  for (int i = 1; i < n; i++) {
    chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
    if (i > 1) {
      chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }
  }

  cout << dp[n - 1] << endl;

  return 0;
}


/*

7
2 9 4 5 1 6 10

ans 8

*/
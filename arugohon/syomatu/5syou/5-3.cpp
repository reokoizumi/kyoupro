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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int w = 10000;
  vector<vector<bool>> dp(n + 1, vector<bool> (w + 1, false));
  dp[0][0] = true;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= w; j++) {
      if (!dp[i][j]) continue;
      dp[i + 1][j] = true;
      if (j + a[i] <= w) {
        dp[i + 1][j + a[i]] = true;
      }
    }
  }

  int res = 0;
  for (int j = 0; j <= w; j++) {
    if (dp[n][j])res++;
  }
  cout << res << endl;

  return 0;
}


/*

3
2 3 5

ans 7

10
1 1 1 1 1 1 1 1 1 1

ans 11

*/
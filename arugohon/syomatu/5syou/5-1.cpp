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
  vector<vector<int>> a(n, vector<int>(3));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
  }

  vector<vector<int>> dp(n+1, vector<int>(3, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (j == k) continue;
        chmax(dp[i + 1][k], dp[i][j] + a[i][k]);
        cout << "i: " << i << " j: " << j << " k: " << k << " dp[i + 1][k]: " << dp[i + 1][k] << " dp[i][j]: " << dp[i][j] << " a[i][k]: " << a[i][k] << endl;
      }
    }
  }
  
  int res = 0;
  for (int j = 0; j < 3; j++) {
    chmax(res, dp[n][j]);
  }

  cout << res << endl;

  return 0;
}


/*

3
10 40 70
20 50 80
30 60 90

ans 210

1
100 10 1

ans 100

7
6 7 8
8 8 3
2 5 2
7 8 6
4 6 8
2 3 4
7 5 1

ans 46


*/
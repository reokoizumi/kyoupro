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
  int n, w;
  cin >> n >> w;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<vector<bool>> dp(n + 1, vector<bool>(w + 1, false));
  dp[0][0] = true;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= w; j++) {
      // cout << "i: " << i << " j: " << j << " " << dp[i][j] << " ";
      if (dp[i][j]) {
        dp[i + 1][j] = true;
      }

      if (j >= a[i] && dp[i][j-a[i]]) {
        dp[i + 1][j] = true;
      }
    }
    cout << endl;
  }
  cout << dp[n][w] << endl;


  if (dp[n][w]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }



  return 0;
}


/*

4 14
3 2 6 5

*/
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}


int main() {
  string s, t;
  cin >> s >> t;
  vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1, INF));

  dp[0][0] = 0;

  for (int i = 0; i <= s.size(); i++) {
    for (int j = 0; j <= t.size(); j++) {
      if (i > 0 && j > 0) {
        if (s[i - 1] == t[j - 1]) {
          chmin(dp[i][j], dp[i - 1][j - 1]);
        } else {
          chmin(dp[i][j], dp[i - 1][j - 1] + 1);
        }
      }
      if (i > 0) {
        chmin(dp[i][j], dp[i - 1][j] + 1);
      }

      if (j > 0) {
        chmin(dp[i][j], dp[i][j - 1] + 1);
      }
    }
  }
  cout << dp[s.size()][t.size()] << endl;

  return 0;
}

/*

logistic algorithm

ans 6

*/
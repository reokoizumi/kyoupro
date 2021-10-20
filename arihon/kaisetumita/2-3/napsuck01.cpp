#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int n;
vector<vector<int>> dp(101, vector<int>(10001, -1));
vector<int> w(101);
vector<int> v(101);

int rec(int i, int j) {
  if (dp[i][j] >= 0) {
    return dp[i][j];
  }
  int res;
  if (i == n) {
    res = 0;
  }else if (j < w[i]) {
    res = rec(i + 1, j);
  } else {
    res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }
  return dp[i][j];
}


int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> w[i] >> v[i];
  }
  int wight;
  cin >> wight;
  // memset(dp, -1, sizeof(dp));
  cout << rec(0, wight) << endl;


  return 0;
}

/*

4
2 3 1 2 3 4 2 2
5

*/
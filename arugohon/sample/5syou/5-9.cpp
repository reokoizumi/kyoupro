#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
// const int INF = 1e+8;
double PI = 3.141592653589793238;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

const ll INF = 1LL << 60;

int main() {
  int n;
  cin >> n;
  vector<vector<ll>> c(n + 1, vector<ll>(n + 1));
  for (int i = 0; i < n+1; i++) {
    for (int j = 0; j < n+1; j++) {
      cin >> c[i][j];
    } 
  }

  vector<ll> dp(n + 1, INF);

  dp[0] = 0;
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      chmin(dp[i], dp[j] + c[i][j]);
    } 
  }

  cout << dp[n] << endl;



  return 0;
}


/*

3
7 1 2 3
6 1 2 3
5 1 2 3
4 1 2 3

*/
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int n;
  cin >> n;
  vector<ll> h(n);
  for(int i = 0; i < n; i++) {
    cin >> h[i];
  }
  vector<ll> dp(n, INF);

  dp[0] = 0;

  for (int i = 1; i < n; i++) {
    if (i == 1) {
      dp[i] = abs(h[i] - h[i - 1]);
    } else {
      dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
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
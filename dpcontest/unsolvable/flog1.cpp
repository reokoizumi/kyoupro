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
  vector<ll> h(N + 1);
  rep(i, N) cin >> h[i];

  vector<ll> dp(N + 1, INF);

  dp[0] = 0;

  for (int i  = 1; i < N; i++) {
    dp[i] = min(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
    if (i > 1) {
      dp[i] = min(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }
  }

  cout << dp[N - 1] << endl;
}
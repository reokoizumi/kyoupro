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
  int N, K;
  cin >> N >> K;
  vector<ll> h(N + 1);
  rep(i, N) cin >> h[i];

  vector<ll> dp(N + 1, INF);
  dp[0] = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 1; j <= K; j++) {
      if (i - j >= 0) {
        dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
      }
      // dp[i + j] = min(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
    }
  }
  cout << dp[N - 1] << endl;
}
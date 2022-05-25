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
  ll W;
  cin >> N >> W;
  vector<ll> w(110);
  vector<ll> v(110);
  rep(i, N) cin >> w[i] >> v[i];
  vector<vector<ll>> dp(110, vector<ll>(W + 1));

  for (int i = 0; i < N; i++) {
    for (int sum_w = 0; sum_w <= W; sum_w++) {
      if (sum_w - w[i] >= 0) {
        dp[i + 1][sum_w] = max(dp[i + 1][sum_w], dp[i][sum_w - w[i]] + v[i]);
      }
      dp[i + 1][sum_w] = max(dp[i + 1][sum_w], dp[i][sum_w]);
    }
  }
  cout << dp[N][W] << endl;
}

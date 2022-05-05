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
  vector<int> x(n);
  rep(i, n) cin >> x[i];
  int ans = INF;
  for (int i = 1; i <= 100; i++) {
    int res = 0;
    for (int j = 0; j < n; j++) {
      res += (x[j] - i) * (x[j] - i);
    }
      ans = min(ans, res);
  }
  cout << ans << endl;
}
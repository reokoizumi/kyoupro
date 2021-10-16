#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;


int main() {
  const vector<int> v = {1, 5, 10, 50, 100, 500};
  vector<int> c(6);
  int a;
  rep(i, 6) cin >> c[i];
  cin >> a;

  int ans = 0;
  for (int i = 5; i >= 0; i--) {
    int t = min(a / v[i], c[i]);
    a -= t * v[i];
    ans += t;
  }
  cout << ans << endl;
}
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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int ans = 0;

  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      ans += a[i];
    } else {
      ans -= a[i];
    }
  }
  cout << abs(ans) << endl;

}
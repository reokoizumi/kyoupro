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
  vector<int> t(n + 1);
  vector<int> x(n + 1);
  vector<int> y(n + 1);
  t[0] = x[0] = y[0] = 0;
  rep(i, n) cin >> t[i+1] >> x[i + 1] >> y[i + 1];

  bool can = true;
  for (int i = 0;i < n; i++) {
    int dt = t[i + 1] - t[i];
    int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
    if (dt < dist) {
      can = false;
    }
    if (dist % 2 != dt % 2) {
      can = false;
    }
  }
  if (can) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
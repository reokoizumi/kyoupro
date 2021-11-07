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
  vector<int> a(n), b(n), c(n);
  rep(i, n) cin >> a[n];
  rep(i, n) cin >> b[n];
  rep(i, n) cin >> c[n];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());

  ll res = 0;
  for (int j = 0; j < n; j++) {
    ll Aj = lower_bound(a.begin(), a.end(), b[j]) - a.begin();
    ll Cj = n - (upper_bound(c.begin(), c.end(), b[j]) - c.begin());
    res += Aj * Cj;
  }

  cout << res << endl;

  return 0;
}


/*

2
1 5
2 4
3 6

ans 3

3
1 1 1
2 2 2
3 3 3

ans 27

6
3 14 159 2 6 53
58 9 79 323 84 6
2643 383 2 79 50 288

ans 87


*/
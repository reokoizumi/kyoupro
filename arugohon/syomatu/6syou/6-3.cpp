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
  ll n, m;
  cin >> n >> m;
  vector<ll> p(n);
  rep(i, n) cin >> p[i];
  p.push_back(0);
  vector<ll> s;
  for (int i = 0; i < p.size(); i++) {
    for (int j = 0; j < p.size(); j++) {
      s.push_back(p[i] + p[j]);
    }
  }
  
  sort(s.begin(), s.end());

  ll res = 0;
  for (ll a : s) {
    auto it = upper_bound(s.begin(), s.end(), m - a);
    if (it == s.begin()) continue;

    // m - a以下の範囲で最大値を求めたい
    it--;
    res = max(res, a + *it);
  }

  cout << res << endl;


  return 0;
}

/*

4 50
3
14
15
9

ans 48

3 21
16
11
2

ans 20


*/
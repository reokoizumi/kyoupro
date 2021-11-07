#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
// const int INF = 1e+8;
double PI = 3.141592653589793238;

const ll INF = 1LL<<50;


int main() {
  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());

  ll left = 0;
  ll right = INF;

  while(right - left > 1) {
    ll x = (left + right) / 2;
    int cnt = 1;
    int prev = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] - a[prev] >= x) {
        cnt++;
        prev = i;
      }
    }

    if (cnt >= m) {
      left = x;
    } else {
      right = x;
    }
  }
  cout << left << endl;


  return 0;
}

/*

5 3
1
2
8
4
9

ans 3

*/
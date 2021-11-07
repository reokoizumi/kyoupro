#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
// const int INF = 1e+8;
double PI = 3.141592653589793238;
const ll INF = 1LL << 60;


int main() {
  int n;
  cin >> n;
  vector<ll> h(n), s(n);
  rep(i, n) cin >> h[i] >> s[i];


  ll left = 0;
  ll right = INF;
  while (right - left > 1) {
    ll mid = (left + right) / 2;

    bool ok = true;
    vector<ll> t(n, 0);
    for (int i = 0; i < n; i++) {
      if (mid < h[i]) {
        ok = false;
      } else {
        t[i] = (mid - h[i]) / s[i];
      }
      // cout << " " << t[i] << " ";
    }
    // cout << endl;
    // cout << "mid: " << mid << endl;

    sort(t.begin(), t.end());
    for (int i = 0; i < n; i++) {
      if (t[i] < i) {
        ok = false;
      }
    }

    if (ok) {
      right = mid;
    } else {
      left = mid;
    }
  }

  cout << right << endl;



  return 0;
}


/*

4
5 6
12 4
14 7
21 2

ans 23

6
100 1
100 1
100 1
100 1
100 1
1 30

ans 105

*/
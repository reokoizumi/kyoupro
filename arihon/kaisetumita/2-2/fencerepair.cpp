#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int n;
  cin >> n;
  vector<int> l(n);
  rep(i, n) cin >> l[i];
  ll ans = 0;
  while (n > 1) {
    int mii1 = 0;
    int mii2 = 1;
    if (l[mii1] > l[mii2]) {
      swap(mii1, mii2);
    }
    
    for (int i = 2; i < n; i++) {
      if (l[i] < l[mii1]) {
        mii2 = mii1;
        mii1 = i;
      }
      else if (l[i] < l[mii2]) {
        mii2 = i;
      }
    }

    int t = l[mii1] + l[mii2];
    ans += t;

    if (mii1 == n - 1) {
      swap(mii1, mii2);
    } 
    l[mii1] = t;
    l[mii2] = l[n - 1];
    n--;
  }

  cout << ans << endl;

  return 0;
}

/*
3 8 5 8

*/
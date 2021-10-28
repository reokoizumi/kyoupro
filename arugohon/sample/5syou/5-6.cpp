#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
// const int INF = 1e+8;
double PI = 3.141592653589793238;

const ll INF = 1LL << 60;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

int n;
vector<ll> h;
vector<ll> dp;

ll rec(int i) {
  if (dp[i] < INF) {
    return dp[i];
  }

  if (i == 0) {
    return 0;
  }

  ll res = INF;
  chmin(res, rec(i - 1) + abs(h[i] - h[i - 1]));
  if (i > 1) {
    chmin(res, rec(i - 2) + abs(h[i] - h[i - 2]));
  }
  return dp[i] = res;
}
 

int main() {
  cin >> n;
  h.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }

  dp.assign(n, INF);
  cout << rec(n - 1) << endl;


  return 0;
}


/*

7
2 9 4 5 1 6 10

ans 8

*/
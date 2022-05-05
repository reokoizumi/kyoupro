#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int calc_digit(ll N) {
  int res = 0;
  while (N) {
    res++;
    N /= 10;
  }
  return res;
}

int main() {
  ll n;
  cin >> n;
  int res = (1<<29);
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ll b = n / i;
      int F = max(calc_digit(i), calc_digit(b));
      res = min(res, F);
    }
  }
  cout << res << endl;
  return 0;
}

/*



*/
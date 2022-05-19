#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int calcDisit(ll n) {
  int res = 0;
  while(n) {
    n /= 10;
    res++;
  }
  return res;
}

int main() {
  ll N;
  cin >> N;
  ll res = INF;
  for (ll i = 1; i * i <= N; i++) {
    if (N % i != 0) {
      continue;
    }
    ll b = N / i;
    ll tmp = max(calcDisit(i), calcDisit(b));
    res = min(res, tmp);
  }
  cout << res << endl;

}
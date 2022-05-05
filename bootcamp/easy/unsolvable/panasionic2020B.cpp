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
  ll h, w;
  cin >> h >> w;
  if (h == 1 || w == 1) {
    cout << 1 << endl;
    return 0;
  }
  cout << ((h * w + 1) / 2) << endl;
}
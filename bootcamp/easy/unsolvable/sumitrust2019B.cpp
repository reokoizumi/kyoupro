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
  for (int i = 1; i <= n; i++) {
    int x = i * 108 / 100;
    if (x == n) {
      cout << i << endl;
      return 0;
    }
  }
  cout << ":(" << endl;
}
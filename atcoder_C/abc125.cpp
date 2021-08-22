#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;

int gcd(int x, int y) {
  int m = min(x, y);
  for (int d = m; d > 0; d--) {
    if (x % d == 0 && y % d == 0) {
      return d;
    }
  }
}


int main() {
  
  return 0;
}
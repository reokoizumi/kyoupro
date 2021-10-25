#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int k, n;
  cin >> k >> n;

  int ans = 0;
  for (int x = 0; x <= k; x++) {
    for (int y = 0; y <= k; y++) {
      int z = n - x - y;
      if (0 <= z && z <= k) {
        ans++;
      }
    }
  }
  cout << ans << endl;

  return 0;
}

/*

2 2

ans 6

5 15

ans 1

*/
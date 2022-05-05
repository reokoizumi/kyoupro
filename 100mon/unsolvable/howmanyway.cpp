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
  int n, x;
  while(cin >> n >> x) {
    if (n == 0 && x == 0) {
      return 0;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
      for (int j = i + 1; j <= n; j++) {
        for (int k = j + 1; k <= n; k++) {
          if (i + j + k == x) {
            ans++;
          }
        }
      }
    }
    cout << ans << endl;
  }

  return 0;
}

/*



*/
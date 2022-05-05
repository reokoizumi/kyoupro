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
  int N;
  cin >> N;
  int res = 0;
  for (int n = 1; n <= N; n += 2) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
      if (n % i == 0) {
        count++;
      }
    }
    if (count*2 == 8) {
      res++;
    }
  }
  cout << res << endl;
  return 0;
}

/*



*/
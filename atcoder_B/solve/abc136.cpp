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

bool isOddDigit(int n) {
  int res = 0;
  while (n > 0) {
    n = n / 10;
    res++;
  }
  if (res % 2 != 0) {
    return true;
  }
  return false;

}

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (isOddDigit(i)) {
      ans++;
    } 
  }
  cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
// const int INF = 1e+8;
const long long INF = 1LL << 60;
double PI = 3.141592653589793238;

int a, b;

bool isSomeSums(int n) {
  int num = 0;
  while (n > 0) {
    num += n % 10;
    n /= 10;
  }
  if (num >= a && num <= b) {
    return true;
  }

  return false;
}

int main() {
  int n;
  cin >> n >> a >> b;

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (isSomeSums(i)) {
      ans += i;
    }
  }
  cout << ans << endl;

}
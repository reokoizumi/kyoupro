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

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = 0;
  while (1) {
    bool isOdd = false;
    for (int i = 0; i < a.size(); i++) {
      if (a[i] % 2 != 0){
        isOdd = true;
        break;
      }
    }
    if (isOdd) {
      break;
    }
    for (int i = 0; i < a.size(); i++) {
      a[i] /= 2;
    }
    ans++;
  }
  cout << ans << endl;

}
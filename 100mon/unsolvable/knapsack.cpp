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
  int n, W;
  cin >> n >> W;
  vector<int> v(n);
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i] >> w[i];
  }

  vector<vector<int>> dp(101, vector<int>(10001));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= W; j++) {
      if (j - w[i])
    }
  }

  


  cout << "hello world" << endl;
  return 0;
}

/*



*/
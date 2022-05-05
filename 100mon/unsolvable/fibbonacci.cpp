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
  vector<int> F(n + 1);
  F[0] = 1;
  F[1] = 1;
  for (int i = 2; i < n + 1; i++) {
    F[i] = F[i - 1] + F[i - 2];
  }
  cout << F[n] << endl;
  return 0;
}

/*



*/
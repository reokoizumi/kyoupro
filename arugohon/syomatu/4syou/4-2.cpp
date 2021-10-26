#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

vector<ll> memo;

ll toribo(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 0;
  } else if (n == 2) {
    return 1;
  }

  if (memo[n] != -1) {
    return memo[n];
  }
  return toribo(n - 1) + toribo(n - 2) + toribo(n - 3);
}


int main() {
  int n;
  cin >> n;
  
  memo.assign(50, -1);
  cout << toribo(n) << endl;
  return 0;
}
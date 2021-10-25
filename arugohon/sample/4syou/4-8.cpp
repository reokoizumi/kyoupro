#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

vector<ll> memo;

ll fibo (int n) {
  if (n == 0 ) {
    return 0;
  } else if (n == 1) {
    return 1;
  }

  if (memo[n] != -1) {
    return memo[n];
  }

  return memo[n] = fibo(n - 1) + fibo(n - 2);
}

int main() {
  
  memo.assign(50, -1);
  fibo(49);
  for (int n = 2; n < 50; n++) {
    cout << n << " 項目: " << memo[n] << endl;
  }

  return 0;
}
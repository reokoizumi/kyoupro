#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int fibo(int n) {
  cout << "fibo(" << n << ") を呼び出しました" << endl;

  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  }

  int result = fibo(n - 1) + fibo(n - 2);
  cout << n << " 項目 = " << result << endl;

  return result;
}

int main() {
  fibo(6);
  return 0;
}
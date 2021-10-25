#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int func(int n) {
  cout << "func(" << n << ") を呼び出しました" << endl;

  if (n == 0) {
    return 0;
  }

  int result = n + func(n - 1);
  cout << n << " までの和 = " << result << endl;

  return result; 
}


int main() {
  func(5);
  return 0;
}
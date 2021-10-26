#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int toribo(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 0;
  } else if (n == 2) {
    return 1;
  }

  return toribo(n - 1) + toribo(n - 2) + toribo(n - 3);
}

int main() {
  int n;
  cin >> n;
  cout << toribo(n) << endl;
  return 0;
}
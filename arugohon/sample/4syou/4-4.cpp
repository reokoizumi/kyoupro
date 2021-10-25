#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int gcd(int m, int n) {

  if (n == 0) {
    return m;
  }
  return gcd(n, m%n);
}


int main() {
  cout << gcd(51, 15) << endl;
  cout << gcd(15, 51) << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int a, b;
  cin >> a >> b;
  cout << __gcd(a, b) << " " << a/__gcd(a, b)*b << endl;
  return 0;
}
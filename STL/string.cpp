#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  string a;
  cin >> a;
  if (a.size() <= 3) cout << a << endl;
  else cout << a.substr(1, 3) << endl;
  return 0;
}
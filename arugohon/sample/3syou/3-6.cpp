#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int n, w;
  cin >> n >> w;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  bool exist = false;
  for (int bit = 0; bit < (1 << n); bit++) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
      if (bit & (1 << i)) {
        sum += a[i];
      }
    }
    if (sum == w) {
      exist = true;
    }
  }
  if (exist) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}



/*

5 10 1 2 4 5 11

*/
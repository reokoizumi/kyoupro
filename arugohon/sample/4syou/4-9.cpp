#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

bool func(int i, int w, const vector<int> &a) {
  if (i == 0) {
    if (w == 0) {
      return true;
    } else {
      return false;
    }
  }

  if (func(i - 1, w, a)) {
    return true;
  }

  if (func(i - 1, w - a[i - 1], a)) {
    return true;
  }

  return false;
}

int main() {
  int n, w;
  cin >> n >> w;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  if (func(n, w, a)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}


/*

5 10 1 2 4 5 11

*/
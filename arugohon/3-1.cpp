#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int n, v;
  cin >> n >> v;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  bool exist = false;
  for (int i = 0; i < n; i++) {
    if (a[i] == v) {
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

5 7
4 3 12 7 11

*/
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  int min_value = INF;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i] +b[j] < k) {
        continue;
      }
      if (a[i] + b[j] < min_value) {
        min_value = a[i] + b[j];
      }
    }
  }

  cout << min_value << endl;


  return 0;
}

/*

3 10
8 5 4
4 1 9

*/
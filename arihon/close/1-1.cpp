#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> k(n);
  for (int i = 0; i < n; i++) {
    cin >> k[i];
  }
  bool flag = false;
  for (int a = 0; a < n; a++) {
    for (int b = 0; b < n; b++) {
      for (int c = 0; c < n; c++) {
        for (int d = 0; d < n; d++) {
          if (k[a]+k[b]+k[c]+k[d] == m) {
            flag = true;
          }
        }
      }
    }
  }
  
  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
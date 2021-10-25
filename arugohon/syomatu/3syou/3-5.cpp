#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  bool flag = true;
  int ans = 0;
  while(true) {
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 != 0) {
        flag = false;
        break;
      }
      a[i] = a[i] / 2;
    }
    if (!flag) {
      break;
    }
    ans++;
  }

  cout << ans << endl;


  return 0;
}



/*
3
8 12 40

ans 2

4
5 6 8 10

ans 0

6
382253568 723152896 37802240 379425024 404894720 471526144

ans 8

*/
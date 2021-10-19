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
  vector<char> s(n+1);
  rep(i, n) cin >> s[i];
  int a = 0;
  int b = n - 1;
  while (a <= b) {
    bool left = false;
    for (int i = 0; a + i <= b; i++) {
      if (s[a + i] < s[b - i]) {
        left = true;
        break;
      } else if (s[a + i] > s[b - i]) {
        left = false;
        break;
      }
    }
    if (left) {
      cout << s[a++];
    } else {
      cout << s[b--];
    }
  }
  cout << endl;
  return 0;
}


/*
6 ACDBCB
*/
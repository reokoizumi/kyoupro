#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;



int main() {
  string s;
  cin >> s;
  int n = s.size();

  ll res = 0;

  for (int bit = 0; bit < (1 << (n - 1)); bit++) {
    ll tmp = 0;
    for (int i = 0; i < n - 1; i++) {
      tmp *= 10;
      tmp += s[i] - '0';

      if (bit & (1 << i)) {
        res += tmp;
        tmp = 0;
      }
    }
    tmp *= 10;
    tmp += s.back() - '0';
    res += tmp;
  }

  cout << res << endl;


  return 0;
}


/*

125

ans 176

9999999999

ans 12656242944


*/
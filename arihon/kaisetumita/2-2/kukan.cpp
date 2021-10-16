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
  vector<int> s(n);
  vector<int> t(n);
  rep(i, n) cin >> s[i];
  rep(i, n) cin >> t[i];
  P itv[n];
  for (int i = 0; i < n; i++) {
    itv[i].first = t[i];
    itv[i].second = s[i];
  }
  sort(itv, itv + n);

  int ans = 0;
  int m = 0;
  for (int i = 0; i < n; i++) {
    if (m < itv[i].second) {
      ans++;
      m = itv[i].first;
    }
  }
  cout << ans << endl;


  return 0;
}

/*

5 1 2 4 6 8 3 5 7 9 10

ans
3 (select 1, 3, 5)

*/
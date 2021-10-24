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
  int min_num = INF;
  int max_num = -INF;
  
  for (int i = 0; i < n; i++) {
    min_num = min(min_num, a[i]);
    max_num = max(max_num, a[i]);
  }
  int ans = max_num - min_num;
  cout << ans << endl;

  return 0;
}


/*

5
1 2 3 4 5

*/
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int n, r;
  cin >> n >> r;
  vector<int> x(n);
  rep(i, n) cin >> x[i];
  sort(x.begin(), x.end());
  int i = 0;
  int ans = 0;
  while (i < n) {
    int s = x[i++];
    while (i < n && x[i] <= s + r){
      i++;
    }
    int p = x[i - 1];
    while (i < n && x[i] <= p + r) {
      i++;
    }
    ans++;
  }
  cout << ans << endl;


  return 0;
}


/*
6 10 1 7 15 20 30 50

*/
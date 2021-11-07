#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  auto b = a;
  sort(b.begin(), b.end());

  vector<int> res(n);

  for (int i = 0; i < n; i++) {
    res[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
  }

  for (int i = 0; i < n; i++) {
    cout << res[i] << " ";
  }
  cout << endl;


  return 0;
}


/*
5
12 43 7 15 9

ans 2 4 0 3 1

*/
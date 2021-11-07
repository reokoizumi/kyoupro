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
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  int min_value = INF;
  sort(b.begin(), b.end());

  //end()で取得するイテレータは最終要素の1つ先である
  b.push_back(INF);

  for (int i = 0; i < n; i++) {
    auto iter = lower_bound(b.begin(), b.end(), k - a[i]);

    int val = *iter;

    if (a[i] + val < min_value) {
      min_value = a[i] + val;
    }
  }
  cout << min_value << endl;

  return 0;
}


/*

3 10
8 5 4
4 1 9

ans 12


*/
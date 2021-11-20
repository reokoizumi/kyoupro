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
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  ll sum = 0;
  for (int i = n - 1; i >= 0; i--) {
    a[i] += sum;
    ll amari = a[i] % b[i];
    ll d = 0;
    if (amari != 0) {
      d = b[i] - amari;
    }
    sum += d;
  }
  cout << sum << endl;

  return 0;
}



/*

3
3 5
2 7
9 4

ans 7

7
3 1
4 1
5 9
2 6
5 3
5 8
9 7

ans 22

*/
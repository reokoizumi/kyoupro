#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

const vector<int> value = {500, 100, 50, 10, 5, 1};


int main() {
  int X;
  vector<int> a(6);
  cin >> X;
  rep(i, 6) cin >> a[i];

  int result = 0;
  for (int i = 0; i < 6; i++) {
    int add = X / value[i];

    if (add > a[i]) {
      add = a[i];
    }

    X -= value[i] * add;
    result += add;
  }

  cout << result << endl;
  
  return 0;
}

/*



*/
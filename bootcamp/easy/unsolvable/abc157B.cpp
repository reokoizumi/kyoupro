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
  vector<vector<int>> a(3, vector<int> (3));
  rep(i, 3) rep(j, 3) cin >> a[i][j];
  int n;
  cin >> n;
  vector<int> b(n + 1);
  rep(i, n) cin >> b[i];

  vector<vector<bool>> punched(3, vector<bool> (3));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < n; k++) {
        if (a[i][j] == b[k]) {
          punched[i][j] = true;
        }
      }
    }
  }
  bool ans = false;
  for (int i = 0; i < 3; i++) {
    if (punched[i][0] && punched[i][1] && punched[i][2]) {
      ans = true;
    }
  }

  for (int j = 0; j < 3; j++) {
    if (punched[0][j] && punched[1][j] && punched[2][j]) {
      ans = true;
    }
  }

  if (punched[0][0] && punched[1][1] && punched[2][2]) {
    ans = true;
  }

  if (punched[0][2] && punched[1][1] && punched[2][0]) {
    ans = true;
  }
  
  ans ? cout << "Yes" << endl : cout << "No" << endl;
}
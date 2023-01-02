#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
// const int INF = 1e+8;
const long long INF = 1LL << 60;
double PI = 3.141592653589793238;

int main() {
  string divide[4] = {"dream", "dreamer", "erase", "eraser"};
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  for (int i = 0; i < 4; i++) {
    reverse(divide[i].begin(), divide[i].end());
  }

  bool can = true;
  for (int i = 0; i < s.size();) {
    bool can2 = false;
    for (int j = 0; j < 4; j++) {
      string d = divide[j];
      if (s.substr(i, d.size()) == d) {
        can2 = true;
        i += d.size();
      }
    }
    if (!can2) {
      can = false;
      break;
    }
  }
  if (can) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
 
}
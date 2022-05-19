#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
      ans++;
    }
  }
  cout << ans << endl;
}
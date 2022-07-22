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
  string s;
  cin >> s;
  int ans = 0;
  if (s[0] == '1') ans++;
  if (s[1] == '1') ans++;
  if (s[2] == '1') ans++;
  cout << ans << endl;
}
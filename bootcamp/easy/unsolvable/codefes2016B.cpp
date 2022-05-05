#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int countA(string s) {
  int cnt = 0;
  for (int i = 0; s.length(); i++) {
    if (s[i] == 'a') {
      cnt++;
    }
  }
  return cnt;
}

int main() {
  int n, A, B;
  cin >> n >> A >> B;
  string s;
  cin >> s;
  vector<string> ans(n, "No");
  int a = 0;
  int b = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'a' && a + b < A + B) {
      ans[i] = "Yes";
      a++;
    } else if (s[i] == 'b' && a + b < A + B && b < B) {
      ans[i] = "Yes";
      b++;
    }
  }

  for (string v: ans) {
    cout << v << endl;
  }
}
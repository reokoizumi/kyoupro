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
  int N;
  cin >> N;
  for (int i = 1; i <= 9; i++) {
    if (N % i == 0 && N / i < 10) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
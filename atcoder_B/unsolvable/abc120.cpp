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
  int A, B, K;
  cin >> A >> B >> K;

  if (A < B) {
    swap(A, B);
  }

  vector<int> ans(101);
  for (int i = 1; i <= B; i++) {
    if (A % i == 0 && B % i == 0) {
      ans.push_back(i);
    }
  }
  sort(ans.begin(), ans.end(), greater<int>());
  cout << ans[K - 1] << endl;

}
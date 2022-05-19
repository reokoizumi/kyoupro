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

ll N, S, A[61];

int main() {
  cin >> N >> S;
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }

  for (ll i = 0; i < (1LL << N); i++) {
    ll sum = 0;
    for (int j = 1; j <= N; j++) {
      if ((i & (1LL << (j - 1))) != 0LL) sum += A[j];
    }
    if (sum == S) {
      cout << "Yes" << endl;
      return 0;
    }
    cout << "No" << endl;
    return 0;
  }
}



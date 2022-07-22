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

int N, L, K;

bool solve(ll M, vector<ll>& A) {
  ll cnt = 0, pre = 0;
  for (int i = 1; i <= N; i++) {
    if (A[i] - pre >= M && L - A[i] >= M) {
      cnt += 1;
      pre = A[i];
    }
  }
  if (cnt >= K) return true;
  return false;
}

int main() {
  cin >> N >> L >> K;
  vector<ll> A(N); 
  rep(i, N) cin >> A[i];

  ll left = -1;
  ll right = L + 1;
  while (right - left > 1) {
    ll mid = left + (right - left) / 2;
    if (solve(mid, A) == false) {
      right = mid;
      cout << "right: " << right << endl;
    } else {
      left = mid;
    }
  }
  cout << left << endl;
  return 0;

}
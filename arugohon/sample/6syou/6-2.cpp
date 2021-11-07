#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

bool P(int x) {
  //xが条件を満たすかどうか
}

int binary_serch() {
  int left, right;

  while (right - left > 1) {
    int mid = left + (right - left) / 2;
    if (P(mid)) {
      right = mid;
    } else {
      left = mid;
    }
  }
  return right;
}

int main() {
  
  return 0;
}
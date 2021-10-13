#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;


int n;
vector<int> a(20);
int k;

bool dfs(int i, int sum) {
  if (i == n) {
    return sum == k;
  }

  if (dfs(i + 1, sum)) {
    return true;
  }

  if (dfs(i + 1, sum + a[i])) {
    return true;
  }
  return false;
}

void solve() {
  if (dfs(0, 0)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

int main() {
  cin >> n;
  rep(i, n) cin >> a[i];
  cin >> k;
  solve();
  
  return 0;
}
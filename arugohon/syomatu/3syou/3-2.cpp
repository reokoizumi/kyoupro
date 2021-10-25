#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int n, v;
  cin >> n >> v;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (v == a[i]) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}

/*

5 1
0 1 1 0 1

*/
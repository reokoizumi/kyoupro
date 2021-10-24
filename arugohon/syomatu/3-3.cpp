#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int min1 = INF;
  int min2 = INF;
  for (int i = 0; i < n; i++) {
    min1 = min(min1, a[i]);
    min2 = min(max(min1, min2), a[i]);
  }
  cout << min2 << endl;


  return 0;
}

/*
2
1 2

5
2 8 4 3 1




*/
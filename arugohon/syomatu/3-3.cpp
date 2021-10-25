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

  int worst_value = INF;
  int second_value = INF;
  for (int i = 0; i < n; i++) {
    if (a[i] < worst_value) {
      second_value = worst_value;
      worst_value = a[i];
    }
    else if (a[i] < second_value) {
      second_value = a[i];
    }
  }

  cout << second_value << endl;



  return 0;
}

/*
2
1 2

5
2 8 4 3 1




*/
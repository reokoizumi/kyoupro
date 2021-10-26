#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

void func(ll n, ll cur, int use, ll &counter) {
  if (cur > n) {
    return;
  }
  if (use == 0b111) {
    counter++;
  }
  // use | 0b001 = bit or
  func(n, cur * 10 + 7, use | 0b001, counter);
  func(n, cur * 10 + 5, use | 0b010, counter);
  func(n, cur * 10 + 3, use | 0b100, counter);
}


int main() {
  ll n;
  cin >> n;
  ll counter = 0;
  func(n, 0, 0, counter);
  cout << counter << endl;



  return 0;
}


/*

575
ans 4

3600
ans 13

999999999
ans 26484



*/
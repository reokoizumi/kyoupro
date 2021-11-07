#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int main() {
  cout << "Start Game!" << endl;

  int left = 20;
  int right = 36;

  while (right - left > 1) {
    int mid = left + (right - left) / 2;

    cout << "Is the age less than " << mid << " ? (yes / no)" << endl;
    string ans;
    cin >> ans;

    if (ans == "yes") {
      right = mid;
    } else {
      left = mid;
    }
  }

  cout << "The age is " << left << "!" << endl;
  
  return 0;
}
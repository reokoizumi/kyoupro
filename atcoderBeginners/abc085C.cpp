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

int main() {
  int X, Y;
  cin >> X >> Y;

  int x = -1;
  int y = -1;
  int z = -1;
  
  for (int i = 0; i <= X; i++) {
    for (int j = 0; j <= X - i; j++) {
      int k = X - i - j;
      if (Y - i * 10000 - j * 5000 - k * 1000 == 0) {
        x = i;
        y = j;
        z = k;
        break;
      }
    }
  }
  cout << x << " " << y << " " << z << endl;
  


}
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
  int n;
  cin >> n;
  vector<int> d(n);
  rep(i, n) cin >> d[i];

  vector<int> bucket(101);
  int ans = 0;

  for (int i = 0; i < n; i++) {
    bucket[d[i]]++;
  }

  for (int i = 0; i <= 101; i++) {
    if (bucket[i]) {
      ans++;
    }
  }
  cout << ans << endl;
}




// int main() {
//   int n;
//   cin >> n;
//   set<int> d;
//   for (int i = 0; i < n; i++) {
//     int a;
//     cin >> a;
//     d.insert(a); 
//   }
//   cout << d.size() << endl;
// }
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

bool cmp(const P &a, const P &b) {
  return a.second < b.second;
}


int main() {
  itn n;
  cin >> n;
  vector<P> inter(n);
  for (int i = 0; i < n; i++) {
    cin >> inter[i].first >> inter[i].second;
  }

  sort(inter.begin(), inter.end(), cmp);
  
  int res = 0;
  int current_end_time = 0;
  for (int i = 0; i < n; i++) {
    if (inter[i].first < current_end_time) continue;

    res++;
    current_end_time = inter[i].second;
  }

  cout << res << endl;

  return 0;
}

/*



*/
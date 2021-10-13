#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int n, m;
vector<vector<char>> field(101, vector<char>(101));

void dfs(int x, int y) {
  field[x][y] = '.';
  for (int dx = -1; dx <= 1; dx++) {
    for (int dy = -1; dy <= 1; dy++) {
      int nx = x + dx, ny = y + dy;

      if (0 <= nx && nx < n && 0 <= ny && ny < m && field[nx][ny] == 'W') {
        dfs(nx, ny);
      }
    }
  }
  // cout << x << ' ' << y << endl;
  return;
}

void solve() {
  int res = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (field[i][j] == 'W') {
        dfs(i, j);
        res++;
        // cout << "i:" << i << " " << "j:" << j << endl;
      }
    }
  }
  cout << res << endl;
}



int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> field[i][j];
    }
  }

  solve();

  return 0;
}

/*
W........WW.
.WWW.....WWW
....WW...WW.
.........WW.
.........W..
..W......W..
.W.W.....WW.
W.W.W.....W.
.W.W......W.
..W.......W.
*/

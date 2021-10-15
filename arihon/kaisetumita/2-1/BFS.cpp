#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

int n, m;
int sx, sy;
int gx, gy;
vector<vector<char>> maze(101, vector<char> (101));
vector<vector<int>> d(101, vector<int> (101));

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int bfs() {
  queue<P> que;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      d[i][j] = INF;
    }
  }
  que.push(P(sx, sy));
  d[sx][sy] = 0;

  while (que.size()) {
    P p = que.front();
    que.pop();
    if (p.first == gx && p.second == gy) {
      break;
    }

    for (int i = 0; i < 4; i++) {
      int nx = p.first + dx[i];
      int ny = p.second + dy[i];

      if (0 <= nx && nx < n && 0 <= ny && ny < m && maze[nx][ny] != '#' && d[nx][ny] == INF) {
        que.push(P(nx, ny));
        d[nx][ny] = d[p.first][p.second] + 1;
      }
    }
  }
  return d[gx][gy];
}

void solve() {
  int res = bfs();
  cout << res << endl;
}



int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> maze[i][j];
      if (maze[i][j] == 'S') {
        sx = i;
        sy = j;
      }
      if (maze[i][j] == 'G') {
        gx = i;
        gy = j;
      }
    }
  }

  solve();

  return 0;
}


/*
10 10 
#S######.#
......#..#
.#.##.##.#
.#........
##.##.####
....#....#
.#######.#
....#.....
.####.###.
....#...G#

*/
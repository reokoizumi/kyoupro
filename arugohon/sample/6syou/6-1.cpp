#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

const int N = 8;
const vector<int> a = {3, 5, 8, 10, 14, 17, 21, 39};

int binary_serch(int key) {
  int left = 0;
  int right = (int)a.size() - 1;
  while (right >= left) {
    int mid = left + (right - left) / 2;
    if (a[mid] == key) {
      return mid;
    }
    else if (a[mid] > key) {
      right = mid - 1;
    }
    else if (a[mid] < key) {
      left = mid + 1;
    }
  }
  return -1;
}


int main() {
  cout << binary_serch(10) << endl; // 3
  cout << binary_serch(3) << endl; // 0
  cout << binary_serch(39) << endl; // 7

  cout << binary_serch(-100) << endl; // -1
  cout << binary_serch(9) << endl; //-1
  cout << binary_serch(100) << endl; // -1
  return 0;
}
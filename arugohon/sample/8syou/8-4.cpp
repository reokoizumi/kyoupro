#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
template<class T> void chmax(T& a, T b) { if (a < b) a = b;}
template<class T> void chmin(T& a, T b) { if (a > b) a = b;}
using ll = long long;
using P = pair<int, int>;
const int INF = 1e+8;
double PI = 3.141592653589793238;

struct Node {
  Node* next;
  string name;

  Node(string name_ = "") : next(NULL), name(name_) { }
};

Node* nil;

void init() {
  nil = new Node();
  nil->next = nil;
}

void printList() {
  Node* cur = nil->next;
  for(; cur!= nil; cur = cur->next) {
    cout << cur->name << " -> ";
  }
  cout << endl;
}

void insert(Node* v, Node* p = nil) {
  v->next = p->next;
  p->next = v;
}


int main() {
  init();
  vector<string> names = {"yamamoto",
                          "watanabe",
                          "ito",
                          "takahashi",
                          "suzuki",
                          "sato"};
  
  for (int i = 0; i < (int)names.size(); i++) {
    Node* node = new Node(names[i]);
    insert(node);
    cout << "step " << i << ": ";
    printList();
  }
  return 0;
}

/*



*/
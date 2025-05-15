#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

class UnionFind {
  private:
  int count;
  vector<int> parent;

  public:
  UnionFind(int _count) {
    count = _count;
    parent = vector<int>(_count);

    for (int i = 0; i < _count; i++) {
      parent[i] = i;
    }
  }

  int root(int node) {
    if (parent[node] != node) {
      parent[node] = root(parent[node]);
    }

    return parent[node];
  }

  void unionNodes(int node1, int node2) {
    int root1 = root(node1), root2 = root(node2);

    if (root1 == root2) {return;}

    parent[root2] = root1;
    count--;
  }

  bool connected(int node1, int node2) {
    return root(node1) == root(node2);
  }

  int _count() {return count;}
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, m, t;
  cin >> n >> m >> t;
  unordered_set<int> s; // 1-index

  for (int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;
    s.insert(tmp);
  }

  UnionFind uf(n); // 0-index

  for (int i = 0; i < t; i++) {
    int tmpu, tmpv;
    cin >> tmpu >> tmpv;
    if (s.find(tmpu) == s.end() && s.find(tmpv) == s.end()) {
      uf.unionNodes(tmpu - 1, tmpv - 1);
    }
  }

  cout << (uf._count() - s.size()) << endl;

  return 0;
}
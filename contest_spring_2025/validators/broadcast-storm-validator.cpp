//
// Created by Jhean Lee on 2025/6/8.
//
#include <bits/stdc++.h>
#include "testlib.h"

class UnionFind {
private:
  int m_count;
  std::vector<int> m_parents;
public:
  UnionFind(int _count) {
    this->m_count = _count;
    this->m_parents = std::vector<int>(_count);
    iota(m_parents.begin(), m_parents.end(), 0);
  }

  int root(int _idx) {
    if (m_parents[_idx] != _idx) {
      m_parents[_idx] = root(m_parents[_idx]);
    }

    return m_parents[_idx];
  }

  void connect(int _lhs, int _rhs) {
    int rootl = root(_lhs), rootr = root(_rhs);
    if (rootl == rootr) return;
    m_parents[rootl] = rootr;
    m_count--;
  }

  bool is_connected(int _lhs, int _rhs) {
    return root(_lhs) == root(_rhs);
  }

  int count() {
    return this->m_count;
  }
};

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  int n = inf.readInt(1, 1000, "n");
  inf.readSpace();
  int m = inf.readInt(n - 1, n * (n - 1) / 2, "m");
  inf.readEoln();

  std::unordered_set<int> s;
  UnionFind uf(n);
  for (int i = 0; i < m; i++) {
    int u = inf.readInt(0, n - 1, "u_i");
    inf.readSpace();
    int v = inf.readInt(0, n - 1, "v_i");
    inf.readEoln();
    ensuref(u != v, "A machine cannot link to itself (u_i == v_i)");
    ensuref(s.find(u * 1000 + v) == s.end() && s.find(v * 1000 + u) == s.end(), "Two machines cannot have over one direct link");
    s.insert(u * 1000 + v);
    s.insert(v * 1000 + u);
    uf.connect(u, v);
  }
  ensuref(uf.count() == 1, "All machines must be on the same network");
  inf.readEof();
}
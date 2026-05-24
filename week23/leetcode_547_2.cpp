// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

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

  void union_nodes(int node1, int node2) {
    int root1 = root(node1), root2 = root(node2);

    if (root1 == root2) { return; }

    parent[root2] = root1;
    count--;
  }

  bool connected(int node1, int node2) {
    return root(node1) == root(node2);
  }

  int size() { return count; }
};

class Solution {
public:
  int findCircleNum(vector<vector<int>>& isConnected) {
    UnionFind uf(isConnected.size());
    for (int i = 0; i < isConnected.size(); i++) {
      for (int j = i + 1; j < isConnected.size(); j++) {
        if (isConnected[i][j] == 1) uf.union_nodes(i, j);
      }
    }

    return uf.size();
  }
};
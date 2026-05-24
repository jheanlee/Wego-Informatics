// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  bool traverse(int dst, int curr, vector<vector<bool>> &adj_matrix, vector<bool> &visited) {
    if (dst == curr) return true;
    if (visited[curr]) return false;

    visited[curr] = true;

    for (int i = 0; i < adj_matrix.size(); i++) {
      if (adj_matrix[curr][i]) {
        if (traverse(dst, i, adj_matrix, visited)) return true;
      }
    }

    visited[curr] = false;
    return false;
  }
public:
  bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    vector<vector<bool>> adj_matrix(n, vector<bool>(n));
    vector<bool> visited(n);

    for (vector<int> &edge: edges) {
      adj_matrix[edge[0]][edge[1]] = true;
      adj_matrix[edge[1]][edge[0]] = true;
    }

    return traverse(destination, source, adj_matrix, visited);
  }
};
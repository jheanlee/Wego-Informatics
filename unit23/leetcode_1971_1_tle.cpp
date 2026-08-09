// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  bool traverse(int dst, int curr, vector<vector<int>> &adj_list, vector<bool> &visited) {
    if (dst == curr) return true;
    if (visited[curr]) return false;

    visited[curr] = true;

    for (int node: adj_list[curr]) {
      if (traverse(dst, node, adj_list, visited)) return true;
    }

    visited[curr] = false;
    return false;
  }
public:
  bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    vector<vector<int>> adj_list(n, vector<int>());
    vector<bool> visited(n);

    for (vector<int> &edge: edges) {
      adj_list[edge[0]].push_back(edge[1]);
      adj_list[edge[1]].push_back(edge[0]);
    }

    return traverse(destination, source, adj_list, visited);
  }
};
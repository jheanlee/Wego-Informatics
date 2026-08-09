// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  void dfs(int index, vector<vector<int>> &is_connected, vector<bool> &visited) {
    visited[index] = true;
    for (int i = 0; i < is_connected.size(); i++) {
      if (is_connected[index][i] && !visited[i]) {
        dfs(i, is_connected, visited);
      }
    }
  }
public:
  int findCircleNum(vector<vector<int>>& isConnected) {
    vector<bool> visited(isConnected.size());
    int count = 0;

    for (int i = 0; i < isConnected.size(); i++) {
      if (!visited[i]) {
        count++;
        dfs(i, isConnected, visited);
      }
    }

    return count;
  }
};
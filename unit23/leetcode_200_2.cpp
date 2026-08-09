// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int numIslands(vector<vector<char>>& grid) {
    int cnt = 0;

    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == '1') {  //  新的島嶼
          cnt++;  //  數量++
          queue<pair<int, int>> q;
          q.emplace(i, j);
          while (!q.empty()) {  //  把這島嶼淹了 (避免重複計算
            pair<int, int> curr = q.front();
            q.pop();

            if (curr.first < 0
              || curr.first >= grid.size()
              || curr.second < 0
              || curr.second >= grid[0].size()
            ) continue;

            if (grid[curr.first][curr.second] == '0') continue;

            grid[curr.first][curr.second] = '0';
            q.emplace(curr.first + 1, curr.second);
            q.emplace(curr.first - 1, curr.second);
            q.emplace(curr.first, curr.second + 1);
            q.emplace(curr.first, curr.second - 1);
          }
        }
      }
    }

    return cnt;
  }
};
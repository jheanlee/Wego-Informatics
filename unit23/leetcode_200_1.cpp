// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void flood_island(vector<vector<char>>& grid, int i, int j) {
    if (j < 0 
      || j >= grid[0].size() 
      || i < 0 
      || i >= grid.size()
    ) return; 

    if (grid[i][j] == '0') return;

    grid[i][j] = '0';
    flood_island(grid, i + 1, j);
    flood_island(grid, i - 1, j);
    flood_island(grid, i, j + 1);
    flood_island(grid, i, j - 1);
  }

  int numIslands(vector<vector<char>>& grid) {
    int cnt = 0;

    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == '1') {  //  新的島嶼
          cnt++;  //  數量++
          flood_island(grid, i, j);   //  把這島嶼淹了 (避免重複計算
        }
      }
    }

    return cnt;
  }
};
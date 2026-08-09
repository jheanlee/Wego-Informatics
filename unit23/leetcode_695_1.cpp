// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  int island_area(vector<vector<int>> &grid, int i, int j) {
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()) return 0;  //  檢查邊界
    if (grid[i][j] == 0) return 0;  //  檢查是否為海水 or 處理過的島嶼
    grid[i][j] = 0; //  處理過的島嶼改成 0 避免重複計算

    return 1  //  記得現在這一格也是一個島嶼面積
      + island_area(grid, i + 1, j)   //  下
      + island_area(grid, i - 1, j)   //  上
      + island_area(grid, i, j + 1)   //  右
      + island_area(grid, i, j - 1);  //  左
  }
public:
  int maxAreaOfIsland(vector<vector<int>> &grid) {
    int res = 0;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == 1) {
          res = max(res, island_area(grid, i, j));
        }
      }
    }
    return res;
  }
};


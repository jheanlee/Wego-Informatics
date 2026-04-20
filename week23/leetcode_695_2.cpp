// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maxAreaOfIsland(vector<vector<int>>& grid) {
    int res = 0;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == 1) {  //  遇到沒處理過的島嶼
          int curr_area = 0;
          queue<pair<int, int>> q;
          q.emplace(i, j);

          while (!q.empty()) {
            pair<int, int> curr = q.front();
            q.pop();

            //  檢查邊界
            if (curr.first < 0
              || curr.first >= grid.size()
              || curr.second < 0
              || curr.second >= grid[0].size()
            ) continue;

            //  檢查是否為海水 or 處理過的島嶼
            if (grid[curr.first][curr.second] == 0) continue;

            curr_area++;  //  增加島嶼面積

            grid[curr.first][curr.second] = 0;  //  處理過的島嶼改成 0 避免重複計算

            //  把上下左右的格子放進queue裡
            q.emplace(curr.first + 1, curr.second);
            q.emplace(curr.first - 1, curr.second);
            q.emplace(curr.first, curr.second + 1);
            q.emplace(curr.first, curr.second - 1);
          }

          res = max(res, curr_area);
        }
      }
    }
    return res;
  }
};
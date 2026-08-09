// ReSharper disable CppMemberFunctionMayBeStatic
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  void backtrack(vector<vector<int>> &output, vector<int> &nums, vector<bool> &used, vector<int> &curr) {
    if (curr.size() == nums.size()) {
      output.push_back(curr);
      return;
    }

    for (int i = 0; i < nums.size(); i++) {
      if (!used[i]) {
        curr.push_back(nums[i]);
        used[i] = true;
        backtrack(output, nums, used, curr);
        used[i] = false;
        curr.pop_back();
      }
    }
  }

public:
  vector<vector<int>> permute(vector<int>& nums) {
    vector<bool> used(nums.size(), false);
    vector<int> curr;
    vector<vector<int>> output;
    backtrack(output, nums, used, curr);
    return output;
  }
};
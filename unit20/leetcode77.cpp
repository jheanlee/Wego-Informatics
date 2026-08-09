// ReSharper disable CppMemberFunctionMayBeStatic
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  void backtrack(vector<vector<int>> &output, int n, int k, vector<int> &curr, int idx) {
    if (curr.size() == k) {
      output.push_back(curr);
      return;
    }

    for (int i = idx; i < n; i++) {
      curr.push_back(i + 1);
      backtrack(output, n, k, curr, i + 1);
      curr.pop_back();
    }
  }
public:
  vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> output;
    vector<int> curr;

    backtrack(output, n, k, curr, 0);
    return output;
  }
};
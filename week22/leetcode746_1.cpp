// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  int minCost(vector<int> &cost, vector<int> &memo, int step) {
    if (step == 0 || step == 1) {
      return cost[step];
    }
    if (memo[step] != -1) {
      return memo[step];
    }
    memo[step] = min(minCost(cost, memo, step - 1), minCost(cost, memo, step - 2)) + cost[step];
    return memo[step];
  }
public:
  int minCostClimbingStairs(vector<int>& cost) {
    vector<int> memo(cost.size(), -1);
    return min(minCost(cost, memo, cost.size() - 1), minCost(cost, memo, cost.size() - 2));
  }
};
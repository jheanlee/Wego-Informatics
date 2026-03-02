// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  int climb(int n, vector<int> &memo) {
    if (memo[n] != -1) return memo[n];
    memo[n] = climb(n - 2, memo) + climb(n - 1, memo);
    return memo[n];
  }

public:
  int climbStairs(int n) {
    vector<int> memo(n + 1, -1);
    memo[0] = 1;
    memo[1] = 1;

    return climb(n, memo);
  }
};
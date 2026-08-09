// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int climbStairs(int n) {
    int prev = 1, curr = 1;

    for (int i = 2; i <= n; i++) {
      int tmp = curr + prev;
      prev = curr;
      curr = tmp;
    }

    return curr;
  }
};
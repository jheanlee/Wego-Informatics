// ReSharper disable CppMemberFunctionMayBeStatic
#include <bits/stdc++.h>
using namespace std;

/* ---從這裡開始--- */
class Solution {
public:
  bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s;

    for (int i : nums) {
      s.insert(i);
    }

    return s.size() != nums.size();
  }
};
// ReSharper disable CppMemberFunctionMayBeStatic
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    if (s.size() == 0 || s.size() == 1) {
      return s.size();
    }
    vector<bool> seen(128, false);
    int l = 0, r = 0, max_len = 0;

    while (r < s.size()) {
      while (seen[s[r]]) {
        seen[s[l]] = false;
        l++;
        max_len = max(max_len, r - l + 1);
      }
      max_len = max(max_len, r - l + 1);
      seen[s[r]] = true;
      r++;
    }

    return max_len;
  }
};
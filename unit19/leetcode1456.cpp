// ReSharper disable CppMemberFunctionMayBeStatic
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  bool isVowel(char &c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
  }
public:
  int maxVowels(string s, int k) {
    int max_c = 0, c = 0;
    int l = 0, r = 0;

    while (r < s.size() && r - l < k) {
      r++;
      c += (int) isVowel(s[r - 1]);
      max_c = max(max_c, c);
    }

    while (r < s.size()) {
      r++;
      c += (int) isVowel(s[r - 1]);

      while (r - l > k) {
        c -= (int) isVowel(s[l]);
        l++;
      }

      max_c = max(max_c, c);
    }

    return max_c;
  }
};
// ReSharper disable CppMemberFunctionMayBeStatic
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<string> findRepeatedDnaSequences(string s) {
    if (s.size() < 10) return vector<string> ();
    unordered_map<string, int> seq;
    vector<string> rtn;

    for (int i = 0; i <= s.size() - 10; i++) {
      seq[string(s, i, 10)]++;
    }

    for (const pair<string, int> &p: seq) {
      if (p.second > 1) {
        rtn.push_back(p.first);
      }
    }

    return rtn;
  }
};
// ReSharper disable CppMemberFunctionMayBeStatic
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<string> findRepeatedDnaSequences(string s) {
    if (s.size() < 10) return vector<string> ();
    unordered_map<unsigned int, int> seq;
    vector<string> rtn;

    unsigned int val = 0;

    for (int i = 0; i < 10; i++) {
      val <<= 2;
      val &= 1048575; //  4^10 - 1

      switch (s[i]) {
        case 'A':
          val += 0;
          break;
        case 'C':
          val += 1;
          break;
        case 'G':
          val += 2;
          break;
        case 'T':
          val += 3;
          break;
      }
    }
    seq[val] = 1;

    int l = 0, r = 10;  //  window [l, r)
    while (r < s.size()) {
      l++; r++;
      val <<= 2;
      val &= 1048575;

      switch (s[r - 1]) {
        case 'A':
          val += 0;
          break;
        case 'C':
          val += 1;
          break;
        case 'G':
          val += 2;
          break;
        case 'T':
          val += 3;
          break;
      }

      seq[val]++;
      if (seq[val] == 2) {
        rtn.push_back(string(s, l, 10));
      }
    }

    return rtn;
  }
};
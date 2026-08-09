// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  vector<vector<int>> traversed;
  int dp(string &w1, int i1, string &w2, int i2) {
    if (i1 == -1) return i2 + 1;    //  if w1 ends, add the rest of w2's characters
    if (i2 == -1) return i1 + 1;    //  if w2 ends, delete the rest of w1's characters

    if (traversed[i1][i2] != -1) return traversed[i1][i2];

    if (w1[i1] == w2[i2]) {
      traversed[i1][i2] = dp(w1, i1 - 1, w2, i2 - 1); //  same character, pass
    } else {
      traversed[i1][i2] = min(
          dp(w1, i1 - 1, w2, i2) + 1, //  delete one character from w1
          min(
              dp(w1, i1, w2, i2 - 1) + 1, //  add one character to w1
              dp(w1, i1 - 1, w2, i2 - 1) + 1  //  replace one character of w1
          )
      );
    }

    return traversed[i1][i2];
  }
public:
  int minDistance(string word1, string word2) {
    traversed = vector<vector<int>> (word1.size(), vector<int>(word2.size(), -1));
    return dp(word1, word1.size() - 1, word2, word2.size() - 1);
  }
};
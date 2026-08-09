// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int bagOfTokensScore(vector<int>& tokens, int power) {
    sort(tokens.begin(), tokens.end());

    int p = 0, q = tokens.size() - 1;
    int score = 0;

    while (p <= q) {
      if (power >= tokens[p]) {
        power -= tokens[p];
        score++;
        p++;
      } else if (q - p > 1 && score > 0) {
        power += tokens[q];
        score--;
        q--;
      } else {
        break;
      }
    }

    return score;
  }
};
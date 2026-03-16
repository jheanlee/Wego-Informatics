// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int minDistance(string word1, string word2) {
    vector<vector<int>> dp(word1.size() + 1, vector(word2.size() + 1, 0));

    //  base
    for (int i = 1; i <= word1.size(); i++) {
      dp[i][0] = i;
    }
    for (int i = 1; i <= word2.size(); i++) {
      dp[0][i] = i;
    }

    //  calc
    for (int i = 1; i <= word1.size(); i++) {
      for (int j = 1; j <= word2.size(); j++) {
        if (word1[i - 1] == word2[j - 1]) {
          dp[i][j] = dp[i - 1][j - 1];
        } else {
          dp[i][j] = min(
              min(
                  dp[i - 1][j] + 1,
                  dp[i][j - 1] + 1
              ),
              dp[i - 1][j - 1] + 1
          );
        }
      }
    }

    return dp[word1.size()][word2.size()];
  }
};
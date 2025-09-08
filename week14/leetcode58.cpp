// ReSharper disable CppMemberFunctionMayBeStatic
#include <bits/stdc++.h>
using namespace std;

/* ---從這裡開始--- */
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1, count = 0;
        while (s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};
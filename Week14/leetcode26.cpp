// ReSharper disable CppMemberFunctionMayBeStatic
#include <bits/stdc++.h>
using namespace std;


/* ---從這裡開始--- */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                nums[p] = nums[i];
                p++;
            }
        }

        return p;
    }
};
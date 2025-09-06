// ReSharper disable CppMemberFunctionMayBeStatic
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  int lower_bound(vector<int> &values, int target) {
    int left = 0, right = values.size();

    while (left < right) {
      int mid = left + (right - left) / 2;

      if (values[mid] == target) {
        right = mid;  //  close up to lower boundary
      } else if (values[mid] < target) {
        left = mid + 1;
      } else if (values[mid] > target) {
        right = mid;
      }
    }

    return left;
  }

public:
  int searchInsert(vector<int>& nums, int target) {
    int index = lower_bound(nums, target);
    return index;
  }
};
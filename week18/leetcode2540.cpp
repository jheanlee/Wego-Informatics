// ReSharper disable CppMemberFunctionMayBeStatic
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  bool binary_search(vector<int> &values, int target) {
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

    return values[left] == target;
  }

public:
  int getCommon(vector<int>& nums1, vector<int>& nums2) {
    if (nums1.size() > nums2.size()) {
      return getCommon(nums2, nums1);
    }

    for (int num: nums1) {
      if (binary_search(nums2, num)) {
        return num;
      }
    }

    return -1;
  }
};
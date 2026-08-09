// ReSharper disable CppMemberFunctionMayBeStatic
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int findKthPositive(vector<int>& arr, int k) {
    int left = 0, right = arr.size();

    while (left < right) {
      int mid = left + (right - left) / 2;
      int missing_count = arr[mid] - (mid + 1);

      if (missing_count < k) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }

    return left + k;
  }
};

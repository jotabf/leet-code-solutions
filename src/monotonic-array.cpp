#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  bool isMonotonic(vector<int>& nums) {
    size_t i = 0;
    int _case = 0;
    for (i = 0; i < nums.size(); i++) {
      if (nums[i] < nums[i + 1]) {
        _case = 1;
        break;
      } else if (nums[i] > nums[i + 1]) {
        _case = 2;
        break;
      }
    }

    switch (_case) {
      case 1:
        for (; i < nums.size() - 1; i++) {
          if (!(nums[i] <= nums[i + 1])) {
            return false;
          }
        }
        break;

      case 2:
        for (; i < nums.size() - 1; i++) {
          if (!(nums[i] >= nums[i + 1])) {
            return false;
          }
        }
        break;
    }

    return true;
  }
};
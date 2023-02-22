// https://leetcode.com/problems/search-insert-position/

#include <vector>

using std::vector;

class Solution
{
public:
  int searchInsert(vector<int> &nums, int target)
  {
    int low = 0;
    int high = nums.size() - 1;
    int mid = (low + high) / 2;

    if (nums.size() == 1 || nums[0] != nums[1])
      return nums[0];

    while (low <= high)
    {

      if (nums[mid] == target)
        return mid;
      else if (target > nums[mid])
        low = mid + 1;
      else
        high = mid - 1;

      mid = (low + high) / 2;
    }

    return low;
  }
};
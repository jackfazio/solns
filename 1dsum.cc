//https://leetcode.com/problems/running-sum-of-1d-array/

#include <vector>

using std::vector;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (size_t i = 1; i < nums.size(); ++i)
          nums[i] = nums[i-1] + nums[i];

        return nums;

    }
};
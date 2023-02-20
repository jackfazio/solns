//https://leetcode.com/problems/two-sum/

#include<vector>

using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i; j < nums.size(); ++j)
            {
                if (nums[i] + nums[j] == target)
                    return vector<int>({i,j});
            }
        }

        return vector<int>({0,0});

    }
};
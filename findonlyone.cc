//https://leetcode.com/problems/single-element-in-a-sorted-array/

#include<vector>

using std::vector;


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int low = 0;  
       int high = nums.size() - 1;
       int mid = (low + high) /2;

       
       while (low < high)
       {
          if (nums[mid - 1] != nums[mid] && nums[mid + 1] != nums[mid])
            return nums[mid];
          else if (mid % 2 == 0) 
            nums[mid] == nums[mid + 1] ? low = mid + 1 : high = mid - 1;
          else if (mid % 2 == 1)  
            nums[mid] == nums[mid - 1] ? low = mid + 1 : high = mid - 1;

          mid = (low + high) /2;
       }

       return nums[mid];
    }
};

/*
even index matches above move low up
even index matches below move high down
odd index matches above move high down
odd index matches below move low up
*/
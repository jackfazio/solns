//https://leetcode.com/problems/richest-customer-wealth/

#include<vector>
#include <algorithm> 

using std::vector;


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mw = 1;
        int iw = 0;
        for (size_t i = 0; i < accounts.size(); ++i)
        {
          iw = 0;
          for (size_t j = 0; j < accounts[i].size(); ++j)
            iw += accounts[i][j];

          mw = std::max(mw, iw);
        }
        return mw;
    }
};
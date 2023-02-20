//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

class Solution {
public:
    int numberOfSteps(int num) {
        unsigned count = 0;
        while (num != 0){
          num = num % 2 ? num - 1 : num / 2;
          ++count;
        }

        return count;
    }
};
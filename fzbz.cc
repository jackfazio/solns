//https://leetcode.com/problems/fizz-buzz/
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::fill;
using std::to_string;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> results(n);
        for (size_t i = 1; i <= results.size(); ++i)
        {
          string result;
          if (i % 15 == 0 )
            result = "FizzBuzz";
          else if (i % 5 == 0)
            result = "Buzz";
          else if (i % 3 == 0)
            result = "Fizz";
          else 
            result = to_string(i);
          
          results[i-1] = result;
        }
        
        return results;
    }
};
//https://leetcode.com/problems/reverse-string-ii/description/;

#include<string>
#include<sstream>
#include<algorithm>
#include<iterator>


using std::stringstream;
using std::string;
using std::reverse;
using std::distance;

class Solution {
public:
    string reverseStr(string s, int k) {
      for (auto i = s.begin(); i <= s.end(); i+=(2 * k)) 
      {
        if (distance(i, s.end()) < k)
          reverse(i, s.end());
        else  
          reverse (i, i + k);

      }

      return s;
    }
};
/*
          auto rit = .rbegin();
          while (k--)
            result << *rit++;
*/
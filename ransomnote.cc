//https://leetcode.com/problems/ransom-note/

#include<vector> 
#include<unordered_map>
#include<string>
#include<algorithm>
#include <stdlib.h>

using std::vector;
using std::string;
using std::unordered_map;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
      if (ransomNote.length() > magazine.length())
        return false;

      unordered_map<char, int> letters = unordered_map<char, int>();

      for (char i : magazine)
        letters[i]++;

      for (char i : ransomNote)
      {
        if (--letters[i] < 0) 
          return false;
      }

      return true;

     
    }
};
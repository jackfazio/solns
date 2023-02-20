/**
 *https://leetcode.com/problems/add-two-numbers/description/
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include<string>
#include <cstdlib>

using std::string;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      string s1 = "";
      string s2 = "";
      ListNode* l1c = l1;
      ListNode* l2c = l2;

      while(l1c->next != NULL){
        s1 += l1->val;
        l1c = l1c->next;
      }
      while(l2c->next != NULL){
        s2 += l2->val;
        l2c = l2c->next;
      }
      int sum = atoi(s1) + atoi(s2);
        
    }
};
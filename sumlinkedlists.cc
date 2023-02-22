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


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

      ListNode* curr = new ListNode();
      ListNode* result = curr;

      int firstListVal = 0;
      int secondListVal = 0;
      int sum = 0;
      int carry = 0;
      
      while(carry || l1 != NULL || l2 != NULL){
        if (l1 != NULL)
        {
          firstListVal = l1->val;
          l1 = l1->next;
        }
        if (l2 != NULL)
        {
          secondListVal = l2->val;
          l2 = l2->next;
        }
        
        sum = firstListVal + secondListVal + carry;

        curr->next = new ListNode(sum % 10);
        curr = curr->next;

        carry = sum / 10;
        secondListVal = firstListVal = 0;
      }

      return result->next;       
    }
};
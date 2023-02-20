//https://leetcode.com/problems/middle-of-the-linked-list/

/**
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
    ListNode* middleNode(ListNode* head) {

      ListNode* curr = head;
      unsigned length = 0; 
      while (curr->next != NULL)
      {
        curr = curr->next;
        ++length;
      }

      curr = head;
      unsigned loc = length % 2 ? length / 2 + 1 : length / 2;
      for (unsigned i = 0; i < loc; ++i)
      {
        curr = curr->next;
      }

      return curr; 
    }
};
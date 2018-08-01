// You are given two non-empty linked lists representing two non-negative integers.
// The digits are stored in reverse order and each of their nodes contain a single digit.
// Add the two numbers and return it as a linked list. You may assume the two numbers do
// not contain any leading zero, except the number 0 itself.
// Example:
// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 0 -> 8
// Explanation: 342 + 465 = 807.
/**
 *
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    	int carry = 0;
          ListNode* headL1 = l1;
          ListNode* prev = l1;
        
          while(l1 != nullptr) {
            int L2Val = l2 ? l2->val : 0;
            l1->val += L2Val + carry;
            carry = l1->val / 10;
            l1->val= l1->val % 10;
            prev = l1;
            l1 = l1->next;
            l2 = l2 ? l2->next : nullptr;
            if(l1 == nullptr) {
              prev->next = l2;
              l2 =  nullptr;
              l1 = prev->next;
            }
          }
          if(carry!= 0){
              prev->next = new ListNode(1);
          }
          return headL1;
    }
};

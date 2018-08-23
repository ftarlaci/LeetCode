/*Given a singly linked list, determine if it is a palindrome.
Example 1:

Input: 1->2
Output: false
Example 2:

Input: 1->2->2->1
Output: true
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr){ return true; }
        ListNode* slow(head);
        ListNode* fast(head);
        while(fast && fast->next){
            slow = slow->next;  // jump one step
            fast = fast->next->next; // jump two steps
        }
        if(fast) {
        	slow = slow->next;
        }   
        ListNode* prev(nullptr); 
        ListNode* cur(slow);
        ListNode* next;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        while(prev){
            if(prev->val != head->val) return false;
            prev = prev->next;
            head = head->next;
        }
        return true;
    }
};
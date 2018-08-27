// Reverse a linked list from position m to n. Do it in one-pass.
// Note: 1 ≤ m ≤ n ≤ length of list.
/**
	Example:
	Input: 1->2->3->4->5->NULL, m = 2, n = 4
	Output: 1->4->3->2->5->NULL

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
    	ListNode* left = new ListNode(0);
        left->next = head;
        int x = m; 
        int y = n - m;
        while(--x) left = left->next;
        ListNode* prev = left->next;
        ListNode* curr = prev->next;
        ListNode* next;
        while(y--){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        left->next->next = curr;
        left->next = prev;
        return m == 1 ? prev : head;
    }
};
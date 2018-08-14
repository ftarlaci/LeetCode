/**Given a linked list, determine if it has a cycle in it.
Follow up:
Can you solve it without using extra space?
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr) return false;
        
        auto *front = head;
        auto *back = head->next;
        
        while (back && back->next && back != front) {
            front = front->next;
            back = back->next->next;
        }
        
        return back == front;
    }
};
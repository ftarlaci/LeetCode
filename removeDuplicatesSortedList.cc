// Given a sorted linked list, delete all duplicates such that each element appear only once.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    	Listnode *curr = head;
    	while(curr->next != nullptr){
    		if(curr->val == curr->next->val){
    			curr->next = curr->next->next;
    		}
    		curr = curr->next;
    	}
};
// I went ahead and dealt with the duplicates in an unsorted linked list as well. 
// Given a sorted linked list, delete all duplicates such that each element appear only once.
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    	Listnode *temp = head->next;
    	Listnode *prev;
    	Listnode *nextOfnext;
    	while(temp->next != nullptr){
    		prev->next = temp->next;
    		nextOfnext = temp;
    		temp = temp->next;
    	}       
    }
};

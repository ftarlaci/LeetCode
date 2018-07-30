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
        if(head == nullptr) return nullptr;
        ListNode *curr = head;
        ListNode *temp;
    	while(curr->next != nullptr){
            //check if curr->next->next is not null first.
    		if(curr->val == curr->next->val){
    			temp = curr->next->next;
                delete curr->next;
                curr->next = temp;
            }else {
                curr= curr->next;
            }
        }
        return head;
    }
};
// I will go ahead and dealt with the duplicates in an unsorted linked list as well. 
// Given a sorted linked list, delete all duplicates such that each element appear only once.
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
<<<<<<< HEAD
	//TODO   
=======
    	Listnode *temp = head->next;
    	Listnode *prev;
    	Listnode *nextOfnext;
    	while(temp->next != nullptr){
    		prev->next = temp->next;
    		nextOfnext = temp;
    		temp = temp->next;
    	}       
>>>>>>> 742c6544951930c801496e8266bd898323baccba
    }
};

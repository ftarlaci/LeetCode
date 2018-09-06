/*
Write a program to find the node at which the intersection of 
two singly linked lists begins.
For example, the following two linked lists:
A:          a1 → a2
                   ↘
                     c1 → c2 → c3
                   ↗            
B:     b1 → b2 → b3

begin to intersect at node c1.

Notes:
If the two linked lists have no intersection at all, return null.
The linked lists must retain their original structure after the function returns.
You may assume there are no cycles anywhere in the entire linked structure.
Your code should preferably run in O(n) time and use only O(1) memory.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*  NOTE: Take aways from the question statement: 
	According to the graphic given in the picture,  we can assume that 
	the intersection, if exists, will be consequtive. However, the size of the
	two LLs do not have to be the same. These can be confirmed by asking 
	the interviewer. 
*/
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       if(!headA || !headB) return nullptr; 
    }
};
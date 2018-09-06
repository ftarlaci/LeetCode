/* Given a binary tree, return the tilt of the whole tree.
 * The tilt of a tree node is defined as the absolute difference between the sum of all left 
 * subtree node values and the sum of all right subtree node values. Null node has tilt 0.
	The tilt of the whole tree is defined as the sum of all nodes' tilt.
	Example:
	Input: 
	         1
	       /   \
	      2     3
	Output: 1
	Explanation: 
	Tilt of node 2 : 0
	Tilt of node 3 : 0
	Tilt of node 1 : |2-3| = 1
	Tilt of binary tree : 0 + 0 + 1 = 1
	Note:
	The sum of node values in any subtree won't exceed the range of 32-bit integer.
	All the tilt values won't exceed the range of 32-bit integer. 
 *  Definition for a binary tree node.
 *  struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// this solution only print a one-level tree. The solution
// to the question above is in the other file named the same. 
class Solution {
public:
    int findTilt(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int absdiff = 0;
        while(!q.empty()){
            TreeNode * curr = q.front();  // pops curr
            if(curr->left){
                q.push(curr->left);
            } else {
                // if no left child, create a node to place hold for left child so we can push 0 as val
                TreeNode * noLeftChild = curr->left;
                noLeftChild->val = 0;
                q.push(noLeftChild);
            }
            if(curr->right){
                q.push(curr->right);
            } else {
                // if not right child, create a node to place hold for left child so we can push 0 as val
                TreeNode * noRightChild = curr->right;
                noRightChild->val = 0;
                q.push(noRightChild);                
            }
            q.pop(); // pop root of the current level
            TreeNode* leftVal = q.front(); // left child
            q.pop();  // pop left and now front will be right child
            TreeNode* rightVal = q.front(); // right child
            q.pop();
            absdiff = abs(leftVal->val - rightVal->val); 
        }
        return absdiff;
        
    }
};
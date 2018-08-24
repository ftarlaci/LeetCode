/**Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).
For example, this binary tree [1,2,2,3,4,4,3] is symmetric:
    1
   / \
  2   2
 / \ / \
3  4 4  3
But the following [1,2,2,null,3,null,3] is not:
    1
   / \
  2   2
   \   \
   3    3
Bonus points if you could solve it both recursively and iteratively.
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

	bool mirrorTree(TreeNode *t1 TreeNode t2){
		if(t1 == nullptr && t2 == nullptr) return true;
		if(t1 && t2 && t1->val == t2->val){
			return mirrorTree(t1->left, t2->right) && 
				   mirrorTree(t1->right, t2->left);
		}
		return false;
	}
    bool isSymmetric(TreeNode* root) {
    	return mirrorTree(root, root);        
    }
};
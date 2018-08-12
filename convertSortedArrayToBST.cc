 /**Given an array where elements are sorted in ascending order, convert it to a height balanced BST.
For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the
two subtrees of every node never differ by more than 1.
Example:
Given the sorted array: [-10,-3,0,5,9],
One possible answer is: [0,-3,9,-10,null,5], which represents the following height balanced BST:
      0
     / \
   -3   9
   /   /
 -10  5
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
    	//if vector is empty, return null. 
    	if(nums.size() == 0) return nullptr;
    	
    	// create a new node that points to the middle of the vector. 
    	TreeNode* root = new TreeNode(nums[nums.size() / 2]);
    	
    	// create two vectors as from the main vector by dividing in the middle.  
    	vector<int> left(nums.begin(), nums.begin() + nums.size() / 2);
    	vector<int> right(nums.begin() + nums.size() / 2 + 1, nums.end());
    	
    	// point the root pointer to the subvectors [0] and recurse on both sub-vectors. 
    	root->left = sortedArrayToBST(left);
    	root->right = sortedArrayToBST(right);
    	return root; 
    }
};



/* 
 * From Wikipedia on BST: 
 * Binary search trees keep their keys in sorted order, so that lookup and other operations
 * can use the principle of binary search: when looking for a key in a tree (or a place to 
 * insert a new key), they traverse the tree from root to leaf, making comparisons to keys
 * stored in the nodes of the tree and deciding, on the basis of the comparison, to continue
 * searching in the left or right subtrees. On average, this means that each comparison allows
 * the operations to skip about half of the tree, so that each lookup, insertion or deletion
 * takes time proportional to the logarithm of the number of items stored in the tree
*/
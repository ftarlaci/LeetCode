/*
	Given a binary tree, return all root-to-leaf paths.
	Note: A leaf is a node with no children.
	Example:
	Input:
	   1
	 /   \
	2     3
	 \
	  5
	Output: ["1->2->5", "1->3"]
	Explanation: All root-to-leaf paths are: 1->2->5, 1->3
/**
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        if(!root) return paths;
        if(!root->left && !root->right) {
            string path = to_string(root->val);
            paths.push_back(path);
            return paths;
        }
        stack<TreeNode*> s;
        stack<string> paths2;
        s.push(root);
        paths2.push(to_string(root->val));
        
        while(!s.empty()){
            TreeNode * curr = s.top();
            s.pop();
            string temp = paths2.top();
            paths2.pop();
            if(curr->left == nullptr && curr->right == nullptr){
                paths.push_back(temp);
                continue;
            } 
            if(curr->right != nullptr) {
                s.push(curr->right);
                paths2.push(temp + "->" + to_string(curr->right->val));
            } 
            if (curr->left !=  nullptr) {
                s.push(curr->left);
                paths2.push(temp + "->" + to_string(curr->left->val));
            }
            
        }
        return paths;
        
        
    }
};

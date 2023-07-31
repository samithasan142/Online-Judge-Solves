/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 // Note: This question is the same as 783.

class Solution {
public:
    vector<int> inorder;
    void inorderTraversal(TreeNode* root){
        if(root == NULL){
            return;
        }
        inorderTraversal(root->left);
        inorder.push_back(root->val);
        inorderTraversal(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        inorderTraversal(root);
        int ans = INT_MAX;
        for(int i=0; i<inorder.size()-1; i++){
            ans = min(ans, inorder[i+1]-inorder[i]);
        }
        return ans;
    }
};
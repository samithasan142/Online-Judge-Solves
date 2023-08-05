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

class Solution {
public:
    vector<int> inorder;
    int i = 0;
    void inorderTraversal(TreeNode* root){
        if(root->left) inorderTraversal(root->left);
        inorder.push_back(root->val);
        if(root->right) inorderTraversal(root->right);
    }

    void check(TreeNode* root){
        if(!root) return;
        check(root->left);
        if(inorder[i] != root->val){
            swap(inorder[i], root->val);
        }
        i++;
        check(root->right);
    }

    void recoverTree(TreeNode* root) {
        inorderTraversal(root);
        sort(inorder.begin(), inorder.end());
        check(root);
    }
};
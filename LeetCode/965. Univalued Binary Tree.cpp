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
    vector<int> ans;

    void inorderTraversal(TreeNode* root){
        if(root != NULL){
            inorderTraversal(root->left);
            ans.push_back(root->val);
            inorderTraversal(root->right);
        }
    }

    bool isUnivalTree(TreeNode* root) {
        inorderTraversal(root);

        int firstElement = ans[0];
        for(int i = 1; i < ans.size(); i++){
            if(ans[i] != firstElement)
                return false;
        }
        return true;
    }
};
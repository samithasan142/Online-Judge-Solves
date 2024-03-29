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

    int findSecondMinimumValue(TreeNode* root) {
        inorderTraversal(root);
        sort(ans.begin(), ans.end());

        for(int i=0; i<ans.size()-1; i++){
            if(ans[i] != ans[i+1])
                return ans[i+1];
        } 
        return -1; 
    }
};
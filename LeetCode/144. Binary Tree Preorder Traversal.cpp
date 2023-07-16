class Solution {
public:
    vector<int> ans;
    
    void preorderTraversalR(TreeNode* root){
        if(root == nullptr) return;
        
        ans.push_back(root->val);
        if(root->left){
            preorderTraversal(root->left);
        }
        
        if(root->right){
            preorderTraversal(root->right);
        }
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        preorderTraversalR(root);
        return ans;
    }
};
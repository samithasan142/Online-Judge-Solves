class Solution {
public:
    vector<int> ans;
    
    void postorderTraversalR(TreeNode* root){
        if(root == nullptr) return;
        
        if(root->left){
            postorderTraversal(root->left);
        }
        
        if(root->right){
            postorderTraversal(root->right);
        }
        ans.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        postorderTraversalR(root);
        return ans;
    }
};
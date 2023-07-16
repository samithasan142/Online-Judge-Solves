class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        
        int leftDepth = minDepth(root->left);
        int rightDepth = minDepth(root->right);
        
        if (root->left == NULL || root->right == NULL)
            return max(leftDepth, rightDepth) + 1;
        
        return min(leftDepth, rightDepth) + 1;
    }
};
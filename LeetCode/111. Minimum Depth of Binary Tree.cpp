class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        
        int leftDepth = minDepth(root->left);
        int rightDepth = minDepth(root->right);

        // If either child is NULL, return the depth of the non-null child + 1
        if (root->left == NULL || root->right == NULL)
            return max(leftDepth, rightDepth) + 1;

        // Both children are not NULL, return the minimum depth among them + 1
        return min(leftDepth, rightDepth) + 1;
    }
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        int leftDepth=0, rightDepth=0;
        if(root == NULL)
            return 0;
        else{
            leftDepth = maxDepth(root->left) + 1;
            rightDepth = maxDepth(root->right) + 1;
        }

        if(leftDepth > rightDepth) 
            return leftDepth;
        else return rightDepth; 
    }
};
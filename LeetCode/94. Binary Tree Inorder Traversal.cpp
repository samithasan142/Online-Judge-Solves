/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */

class Solution {
public:
    vector<int> ans;
    
    void inorderTraversalR(TreeNode* root){
        if(root == nullptr) return;
        if(root->left){
            inorderTraversal(root->left);
        }
        ans.push_back(root->val);
        if(root->right){
            inorderTraversal(root->right);
        }
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        inorderTraversalR(root);
        return ans;
    }
};

/*
int main() {
    // Create the binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Create an instance of the Solution class
    Solution solution;

    // Perform the inorder traversal
    vector<int> result = solution.inorderTraversal(root);

    cout << "Inorder Traversal: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
*/

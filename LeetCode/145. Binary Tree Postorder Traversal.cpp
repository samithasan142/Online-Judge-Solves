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

    // Perform the postorder traversal
    vector<int> result = solution.postorderTraversal(root);

    cout << "Postorder Traversal: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
*/

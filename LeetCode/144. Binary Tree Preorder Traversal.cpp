/*
    #include<bits/stdc++.h>
    using namespace std;
*/

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

    // Perform the preorder traversal
    vector<int> result = solution.preorderTraversal(root);

    cout << "Preorder Traversal: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
*/

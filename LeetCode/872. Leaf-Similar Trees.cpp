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
    void leaf(TreeNode *root, vector<int>& v){

        //If the current node is a leaf node, the value of the node is added to the v vector.
        if(root->right == NULL && root->left == NULL){
            v.push_back(root->val);
        }

        if(root->right != NULL){
            leaf(root->right, v);
        }
        if(root->left != NULL){
            leaf(root->left, v);
        }
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        // Two empty vectors v1 and v2, which will store the leaf node values of the respective trees.
        vector<int> v1;
        leaf(root1, v1);
        vector<int> v2;
        leaf(root2, v2);

        //It checks if the sizes of v1 and v2 are different. If they are different, it means the number of leaf nodes in the trees is not the same.
        if(v1.size() != v2.size()){
            return false;
        }

        // If any pair of leaf node values is different, it returns false.
        for(int i=0; i<v1.size(); i++){
            if(v1[i] != v2[i]){
                return false;
            }
        }
        return true;
    }
};

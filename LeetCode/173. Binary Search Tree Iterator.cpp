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
class BSTIterator {
public:
    vector<int> nodes;
    int curr = -1;
    void inorder(TreeNode* root) {
        if(!root) return;
        inorder(root->left);
        nodes.push_back(root -> val);
        inorder(root->right);
    }

    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        if(curr == nodes.size() - 1){
            return -1;
        } 
        curr++;
        return nodes[curr];
    }
    
    bool hasNext() {
        if(curr == nodes.size() - 1){
            return false;
        }
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
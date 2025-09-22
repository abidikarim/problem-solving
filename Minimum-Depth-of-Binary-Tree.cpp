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
    int dfs(TreeNode *root){
        if(!root)
            return 0;
        int dl = dfs(root->left);
        int dr = dfs(root->right);
        if (!root->left)  // only right child exists
            return dr + 1;
        if (!root->right) // only left child exists
            return dl + 1;
        return min(dl ,dr) + 1;
    }
    int minDepth(TreeNode* root) {
        return dfs(root);
    }
};
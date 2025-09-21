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
    bool ok = 1;
    int dfs(TreeNode *root){
        if(!root)
            return 0;
        int dl = dfs(root->left);
        int dr = dfs(root->right);
        int d = max(dr, dl) + 1;
        if(abs(dr - dl) > 1){
            ok =0;
            return 0;
        }
        return d;
    }
    bool isBalanced(TreeNode* root) {
        dfs(root);
        return ok;
    }
};
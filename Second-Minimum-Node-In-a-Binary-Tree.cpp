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
    long ans = LONG_MAX;
    void dfs(TreeNode* r, int minVal){
        if(!r) return;

        if(r->val > minVal && r->val < ans){
            ans = (long) r->val;
            return;
        }

        if(r->left) dfs(r->left, minVal);
        if(r->right) dfs(r->right, minVal);
    }
    int findSecondMinimumValue(TreeNode* root) {
        dfs(root, root->val);
        return ans == LONG_MAX ? -1 : int(ans);
    }
};
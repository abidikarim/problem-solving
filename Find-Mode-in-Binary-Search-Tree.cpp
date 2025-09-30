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
    map<int ,int>mp;
    int mx = -1e9;
    void dfs(TreeNode* root){
        if(!root) return;
        mp[root->val]++;
        mx = max(mx, mp[root->val]);
        if(root->left)
            dfs(root->left);
        if(root->right)
            dfs(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        dfs(root);
        vector<int>ans;
        for(auto [key, val]:mp){
            if(val == mx){
                ans.push_back(key);
            }
        }
        return ans;
    }
};
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
    set<int>st;
    void dfs(TreeNode* r){
        if(!r) return;
        st.insert(r->val);
        if(r->left) dfs(r->left);
        if(r->right) dfs(r->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        dfs(root);
        if(st.size() == 1) return -1;
        auto it = next(st.begin());
        return *it;
    }
};
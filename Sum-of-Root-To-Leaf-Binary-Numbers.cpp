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
    vector<string> getBinaryCodes(TreeNode* root){
        if(!root->left && !root->right){
            return {to_string(root->val)};
        }
        vector<string>codes;
        for(auto child:{root->left, root->right}){
            if(child){
                for(string &s:getBinaryCodes(child)){
                    codes.push_back(to_string(root->val)+s);
            }
        }
    }
        return codes;
    }
    int sumRootToLeaf(TreeNode* root) {
        auto codes = getBinaryCodes(root);
        int ans=0;
        for(auto s:codes){
            ans+= stoi(s, nullptr, 2);
        }
        return ans;
    }
};
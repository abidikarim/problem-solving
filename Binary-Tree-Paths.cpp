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
    vector<string> binaryTreePaths(TreeNode* root) {
        string val = to_string(root->val);
        if(!root->left && !root->right){
            return {val};
        }
        
        vector<string>ans;

        for(auto &child:{root->right, root->left}){
            if(child){
                for(string &path:binaryTreePaths(child)){
                    ans.push_back(val + "->" + path);
                }
            }
        }
        return ans;
    }
};
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int sz = q.size(), z =sz;
            long sum=0;
            while(sz--){
                TreeNode* f = q.front();
                sum+=f->val;
                q.pop();
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }

            double avg = (double) sum / z;
            ans.push_back(avg);
        }
        return ans;
    }
};
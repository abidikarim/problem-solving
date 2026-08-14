class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        map<int, int>mp;
        vector<int>ans;
        int n = nums.size();
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
            if(i >= k-1){
                if(i >= k) mp[nums[i-k]]--;
                int nb =0;
                for(auto m:mp){
                    nb += m.second;
                    if(nb >= x){
                        ans.push_back(m.first > 0 ? 0 : m.first);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
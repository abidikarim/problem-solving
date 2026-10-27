class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        vector<long long>ans;
        map<int, long long>mp;
        priority_queue<pair<long long, int>>pq;
        int n = nums.size();

        for(int i=0; i<n; i++){
            mp[nums[i]] += freq[i];
            pq.push({mp[nums[i]], nums[i]});

            while(mp[pq.top().second] != pq.top().first)
                pq.pop();
            
            ans.push_back(pq.top().first);
        }

        return ans;
    }
};
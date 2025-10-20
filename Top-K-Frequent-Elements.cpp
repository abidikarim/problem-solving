class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int>ans;
       unordered_map<int,int>mp;
       priority_queue<pair<int,int>>pq;

       for(int x:nums){
            mp[x]++;
       }

       for(auto [num, freq]:mp){
            pq.push({freq, num});
       }
       
       for(int i=0; i<k; i++){
            ans.push_back(pq.top().second);
            pq.pop();
       }
       return ans;
    }
};
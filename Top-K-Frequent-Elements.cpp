class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       map<int, int>mp; 
       vector<int>ans;
       for(int n:nums){
            mp[n]++;
       }
       vector<pair<int,int>>v;
       for(auto [key, val]:mp){
            v.push_back({key,val});
       }

       sort(v.begin(), v.end(),[](pair<int, int>&a, pair<int, int>&b){
                return a.second > b.second;
       });
       int i=0;
       while(k--){
            ans.push_back(v[i++].first);
       }
       return ans;
    }
};
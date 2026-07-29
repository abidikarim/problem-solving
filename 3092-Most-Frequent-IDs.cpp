class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        vector<long long>ans;
        map<int, long long>mp;
        multiset<long long>st;
        for(int i=0; i<nums.size(); i++){
            auto it = mp.find(nums[i]);
            if(it != mp.end()){
                auto itr = st.find(it->second);
                long long a = *itr + freq[i];
                mp[nums[i]] = a;
                if(itr != st.end()) st.erase(itr);
                st.insert(a);
            }else {
                mp[nums[i]] = freq[i];
                st.insert(freq[i]);
            }
            ans.push_back(*st.rbegin());
        }

        return ans;
    }
};
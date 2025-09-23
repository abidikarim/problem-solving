class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int>mp;
        for(int a:nums){
            mp[a]++;
        }
        multiset<int, greater<int>>st;

        for(auto [key, val]:mp){
            cout<<key<<"  "<<val<<endl;
            st.insert(val);
        }

        int ans= *st.begin();

       for (auto it = next(st.begin()); it != st.end(); it++) {
            if (*it == *st.begin()) ans += *it;
        }
            return ans == 1 ? nums.size() : ans;
    }
};
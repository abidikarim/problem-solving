class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>st;

        for(int& x:nums){
            if(x > 0)
                st.insert(x);
        }

        int ans = 1;
        auto it = st.begin();
        while(it != st.end() && *it == ans){
            it++;
            ans++;
        }
        return ans;
        
    }
};
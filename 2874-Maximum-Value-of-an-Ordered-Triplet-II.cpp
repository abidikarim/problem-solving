class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        multiset<long long>st;
        int n = nums.size();
        
        for(int i=2; i<n; i++){
            st.insert(nums[i]);
        }

        long long ans = 0 ;
        int mx = nums[0];

        for(int i=1; i<n-1; i++){
            if(i > 1) st.erase(st.lower_bound(nums[i]));
            if(mx > nums[i]){
                ans = max(ans, (mx - nums[i]) * (*st.rbegin()));
            }
            mx = max(mx, nums[i]);
        }

        return ans;

    }
};
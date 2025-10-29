class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>>result;
        set<vector<int>>st;

        for(int i=0; i<n; i++){
            int l= i+1;
            int r = n-1;
            int target = -nums[i];
            while(l <r){
                int curr = nums[l] + nums[r];
                if(curr == target){
                    st.insert({nums[i], nums[l++], nums[r--]});
                }else if(curr > target){
                    r--;
                }else {
                    l++;
                }
            }
        }
        auto it = st.begin();
        while(it != st.end()){
            result.push_back(*it);
            it++;
        }
        return result;
    }
};
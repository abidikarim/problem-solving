class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        int n=nums.size();
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        nums.clear();
        while(!st.empty()){
            nums.push_back(*st.begin());
            st.erase(st.begin());
        }
        return nums.size();
    }
};
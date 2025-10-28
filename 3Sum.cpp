class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>>result;
        for(int i=0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;
            int l= i+1;
            int r = n-1;
            while(l < r){
                int curr = nums[i] + nums[l] + nums[r];
                if(curr == 0){
                    result.push_back({nums[i], nums[l], nums[r]});
                    int leftValue = nums[l];
                    int rightValue = nums[r];

                    while(l<r && nums[l] == leftValue){
                        l++;
                    }

                    while(l<r && nums[r] == rightValue){
                        r--;
                    }

                }else if(curr > 0){
                    r--;
                }else {
                    l++;
                }
            }
        }
        return result;
    }
};
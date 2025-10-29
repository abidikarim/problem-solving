class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int closest = nums[0]+nums[1]+nums[2];
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;
            
            int l = i+1;
            int r = n-1;

            while(l<r){
                int cur = nums[i] + nums[l] + nums[r];
                if(cur == target) return cur;
                if(abs(target - cur) < abs(target - closest)){
                    closest = cur;
                }
                if(cur > target){
                    r--;
                }else {
                    l++;
                }
            }
        }
        return closest;
    }
};
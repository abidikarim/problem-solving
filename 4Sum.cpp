class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>result;
        int n = nums.size();


        for(int i=0; i<n-1; i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;
            for(int j=i+1; j<n; j++){
                if(j > i+1 && nums[j] == nums[j-1])
                    continue;
                int st = j+1;
                int end = n-1;
                while(st < end){
                    long long cur = (long long) nums[i] + nums[j] + nums[st] + nums[end];
                    if(cur == target){
                        result.push_back({nums[i], nums[j], nums[st++], nums[end--]});

                        while(st<end && nums[st] == nums[st-1]){
                            st++;
                        }
                        while(st<end && nums[end] == nums[end+1]){
                            end--;
                        }
                    }else if(cur < target){
                        st++;
                    }else {
                        end--;
                    }
                }
            }
        }
        return result;
    }
};
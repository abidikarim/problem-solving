class Solution {
public:
    void sortColors(vector<int>& nums) {
      map<int, int>mp;
       for(int x:nums){
            mp[x]++;
       } 
       int i=0;
       for(auto [num, freq]:mp){
            while(freq--){
                nums[i++] = num;
            }
       }
    //    return nums;
    }
};
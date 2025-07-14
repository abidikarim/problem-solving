class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       map<int,int>mp;
       vector<int>ans;
       for(int i=1; i<=nums.size(); i++){
        mp[i]=0;
       } 
       for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
       }
       for(auto [key,val]:mp){
            if(val == 0) ans.push_back(key);
       }
       return ans;
    }
};
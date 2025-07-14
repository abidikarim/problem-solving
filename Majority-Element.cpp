class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int ans=0, nb=0;
        for(int x:nums){
            mp[x]++;
        }
        for(auto [key,val]:mp){
            if(val > nb){
                nb=val;
                ans=key;
            }
        }
        return ans;
    }
};
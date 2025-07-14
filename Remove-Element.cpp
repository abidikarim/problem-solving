class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        if(mp.count(val)){
            mp.erase(val);
        }
        nums.clear();
        for(auto[key,value]:mp){
            for(int i=0;i<value; i++)
                nums.push_back(key);
        }
        return nums.size();
    }
};
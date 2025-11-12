class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int>mp;
        vector<vector<int>>result;
        for(vector<int>&v:nums1)
            mp[v[0]]+= v[1];

        for(vector<int>&v:nums2)
            mp[v[0]]+= v[1];

        for(auto[key, val]:mp)
            result.push_back({key, val});

        return result;
    }
};
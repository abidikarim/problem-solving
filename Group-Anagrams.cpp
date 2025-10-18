class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string, vector<string>>mp;
        int n = strs.size();
        for(int i=0; i<n; i++){
            string sortedString = strs[i];
            sort(sortedString.begin(), sortedString.end());
            mp[sortedString].push_back(strs[i]);
        }
        for(auto [key, val]:mp){
            ans.push_back(val);
        }
        return ans;
    }
};
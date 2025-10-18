class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string, vector<int>>mp;
        set<int>st;
        int n = strs.size();
        for(int i=0; i<n; i++){
            string sortedString = strs[i];       // make a copy
            sort(sortedString.begin(), sortedString.end());
            mp[sortedString].push_back(i);
        }
        for(auto [key, val]:mp){
            multiset<string>st;
            for(int i=0; i<val.size(); i++){
                st.insert(strs[val[i]]);
            }
            vector<string> v(st.begin(), st.end());
            ans.push_back(v);
        }

        sort(ans.begin(), ans.end(), 
                    [](const vector<string>& a, const vector<string>& b) {
                        return a.size() < b.size();  // smaller size first
                    });
        // sort(v.begin(), v.end());
        return ans;
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans ="";
        int n = strs.size(); 
        string s = strs[0];

        for(int i=0; i<s.size(); i++){
            
            for(int j=0; j<n; j++){
                if(s[i] != strs[j][i]) return ans;
            }
            ans.push_back(s[i]);
        }
        
            return ans;
        }
};
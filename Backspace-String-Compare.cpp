class Solution {
public:
    string handleString(string &s) {
        string ans="";
        for(char &c:s) {
            if(c =='#' && ans.size() > 0) {
                ans.pop_back();
            }else if(c != '#') {
               ans.push_back(c);
            }
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        return handleString(s) == handleString(t);
    }
};
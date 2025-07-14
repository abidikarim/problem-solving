class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char>st;
        int j=0;
        for(int i=0; i<t.size(); i++){
            if(t[i] == s[j]){
                st.push(t[i]);
                j++;
            }
        }
        return st.size() == s.size() ? true : false;
    }
};
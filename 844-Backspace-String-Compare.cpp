class Solution {
public:
    string handleString(string s){
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '#' && !st.empty()){
                st.pop();
            }else if(s[i] != '#') {
                st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        return handleString(s) == handleString(t);
    }
};
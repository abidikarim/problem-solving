class Solution {
public:
    stack<char> handleString(string s){
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '#' && !st.empty()){
                st.pop();
            }else if(s[i] != '#') {
                st.push(s[i]);
            }
        }
        return st;
    }
    bool backspaceCompare(string s, string t) {
        return handleString(s) == handleString(t);
    }
};
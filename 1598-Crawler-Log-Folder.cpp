class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        for(string &l:logs){
            if(l == "../" && !st.empty())
                st.pop();
            if(l != "../" && l != "./")
                st.push(l);
        }
        return st.size();
    }
};
class Solution {
public:
    bool isValid(string s) {
      stack<char>st;
      for(char c:s) {
        if(c != 'c') st.push(c);
        else {
            if(st.size() < 2 || st.top() != 'b') st.push(c);
            else {
                st.pop();
                if(st.top() == 'a') st.pop();
                else {
                    st.push('b');
                    st.push(c);
                }
            }
        }
      }  
      return st.empty();
    }
};
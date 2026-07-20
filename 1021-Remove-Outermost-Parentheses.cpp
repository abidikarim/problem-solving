class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt =0;
        string ans= "" , current = "";

        for(char &c:s){
            if(c == '('){
                if(cnt) current += c;
                cnt++;
            }else {
                if(cnt > 1) current += c;
                cnt--;
            }
            if(cnt == 0){
                ans+= current;
                current = "";
            }
        }
        return ans;
    }
};
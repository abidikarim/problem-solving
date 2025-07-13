class Solution {
public:
    bool isPalindrome(int x) {
        bool ans=true;
        string s =to_string(x); 
        for(int i=0; i<s.size() / 2 ; i++){
            if(s[i] != s[s.size()-1-i]){
                ans=false;
            }
        }
        return ans;
    }
};
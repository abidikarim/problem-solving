class Solution {
public:
    int longestPalindrome(string s) {
       map<char,int>mp;
       int ans=0;
       for(char c:s){
        mp[c]++;
       } 
       bool hasOdd=false;
       for(auto [key,val]:mp){
            if(val % 2 ==0){
                ans+=val;
            }else {
                ans+=val-1;
                hasOdd = true;
            }
       }
       if(hasOdd) ans++;
       return ans;
    }
};
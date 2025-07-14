class Solution {
public:
    char findTheDifference(string s, string t) {
       map<char,int>mp;
       for(char c:s){
            mp[c]++;
       } 
       for(char c:t){
            mp[c]--;
       }
       for(auto [key,val]:mp){
            if(val < 0 ){
                return key;
            }
       }
       return ' ';
    }
};
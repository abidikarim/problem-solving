class Solution {
public:
    int romanToInt(string s) {
        long long ans=0;
        int n=s.size(),i=0;
        map<string,int>mp={
            {"IV",4},
            {"IX",9},
            {"I",1},
            {"XL",40},
            {"XC",90},
            {"X",10},
            {"CD",400},
            {"CM",900},
            {"C",100},
            {"V",5},
            {"L",50},
            {"D",500},
            {"M",1000},
        };
        while(i<n){
           if(i+1 < n){
                string st = s.substr(i,2);
                if(mp.count(st)){
                    ans+=mp[st];
                    i+=2;
                    continue;
                }
           }
            string ch= string(1,s[i]);
            ans+=mp[ch];
            i++;
        }
        return ans;
    }
};
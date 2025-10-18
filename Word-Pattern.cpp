class Solution {
public:
    bool wordPattern(string p, string s) {
       map<char,string>mp;
       map<string,char>mc;
       int i=0;
       stringstream ss(s);
       string word;
       while(ss >> word){
            if(i >= p.size())
                return false;
            if((mp.count(p[i]) && mp[p[i]] != word) || (mc.count(word) && mc[word] != p[i]))
                return false;
            mp[p[i]] = word;
            mc[word] = p[i++];
       }
       return i == p.size();
    }
};
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int>mp;
        string current;
        for(int i=0; i < s.size(); i++){
            current += s[i];
            if(current.size() == 10){
                mp[current]++;
                current = current.substr(1);
            }
        }
        vector<string>v;
        for(auto [key, val]:mp){
            if(val >= 2){
                v.push_back(key);
            }
        }
        return v;
    }
};
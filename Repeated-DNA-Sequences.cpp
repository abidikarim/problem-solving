class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.size() < 10) return {};
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



/*
 if((s[j] == 'A' || s[j] == 'C' || s[j] == 'G' || s[j] == 'T') && current.size() != 10){
                current+=s[j];
            }else if(s[i] != 'A' || s[i] != 'C' || s[i] != 'G'){
                current.clear();
                break;
            }
            if(current.size() == 10){
                st.insert(current);
                current.clear();
            }



*/
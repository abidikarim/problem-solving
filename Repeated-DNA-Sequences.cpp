class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.size() < 10) return {};
        unordered_map<string, int>mp;
        for(int i=0; i <= s.size()-10; i++){
            string current = s.substr(i,10);
            mp[current]++;
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
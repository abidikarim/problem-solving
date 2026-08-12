class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        unordered_map<string, int> mp;

        for (string& name : names) {
            if (mp[name]) {
                int cnt = mp[name];
                while (mp[name+"("+to_string(cnt)+")"]) {
                    cnt++;
                }
                mp[name]++;
                name = name + "(" + to_string(cnt) + ")";
            }
            mp[name]++;
        }
        return names;
    }
};
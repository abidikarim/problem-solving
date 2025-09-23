class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<string>v1;
        vector<string>v2;
        stringstream ss1(version1);
        string token1;
        while (getline(ss1, token1, '.')) {
            v1.push_back(token1);
        }
        stringstream ss2(version2);
        string token2;
        while(getline(ss2, token2, '.')){
            v2.push_back(token2);
        }

        int maxLen = max(v1.size(), v2.size());
        for(int i=0; i<maxLen; i++){
            int r1 , r2;
            if(i < v1.size()){
                r1 = stoi(v1[i]);
            }else {
                r1 = 0;
            }
            if(i < v2.size()){
                r2 = stoi(v2[i]);
            }else {
                r2 = 0;
            }
            if(r1 > r2) return 1;
            else if(r1 < r2) return -1;
        }
        return 0;
    }
};
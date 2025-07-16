class Solution {
public:
    int strStr(string s1, string s2) {
       int n = s1.size(), m = s2.size();

        for (int i = 0; i <= n - m; ++i) {
            if (s1.substr(i, m) == s2)
                return i;
        }
        return -1;
    }
};
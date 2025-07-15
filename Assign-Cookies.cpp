class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      sort(g.begin(), g.end());  // sort greed factors
        sort(s.begin(), s.end());  // sort cookie sizes
        
        int i = 0, j = 0;  // i: child, j: cookie
        
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                i++;  // child is content
            }
            j++;  // move to next cookie
        }
        
        return i;
    }
};
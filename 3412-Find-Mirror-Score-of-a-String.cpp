#define ll long long 

class Solution {
public:
    long long calculateScore(string s) {
        vector<stack<int>>v(26);
        ll ans = 0;
        for(int i=0; i<s.size(); i++){
            int order = s[i] - 'a';
            int comp = 25 - order;
            if(!v[comp].empty()){
                ans += i - v[comp].top();
                v[comp].pop();
            }else {
                v[order].push(i);
            }
        }
        return ans;
    }
};
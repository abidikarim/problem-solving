class Solution {
public:
    long long calculateScore(string s) {
     vector<stack<int>>v(26);
     long long ans =0;
     int n =s.size();
     for(int i=0;i<n;i++) {
        int order=s[i]-'a';
        int comp =25-order;
        if(!v[comp].empty()) {
            ans+=i-v[comp].top();
            v[comp].pop();
        }else {
            v[order].push(i);
        }
     }   
     return ans;
    }
};
#define ll long long
class Solution {
public:
    ll maximumTripletValue(vector<int>& v) {
        multiset<ll>right;
        int mx=v[0];
        int n= v.size();
        for(int i=2; i<n; i++){
            right.insert(v[i]);
        }
        ll ans=0;
        for(int i=1; i<n-1; i++){
            if(i>1) right.erase(right.lower_bound(v[i]));
            if(mx > v[i]){
                ans = max(ans,(mx-v[i]) * (*right.rbegin()));
            }
            mx =max(mx,v[i]);
        }
        return ans;
    }
};
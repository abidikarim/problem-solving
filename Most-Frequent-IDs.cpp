#define ll long long
#define pp pair<ll,ll>
class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>&v, vector<int>& freq) {
        vector<ll>ans;
        set<pp>ids_freq;
        map<ll,ll> old_freq_per_value;
        int n = v.size();
        for(int i=0; i<n; i++){
            int res;
            ll old=0;
            if(old_freq_per_value.count(v[i])){
                old= old_freq_per_value[v[i]];
                ids_freq.erase(ids_freq.find({old,v[i]}));
                old_freq_per_value.erase(v[i]);
            }
            if((old + freq[i]) != 0 ){
                    ids_freq.insert({old + freq[i],v[i]});
                    old_freq_per_value[v[i]] = old + freq[i];
            }
            ans.push_back(ids_freq.empty() ? 0 : (*ids_freq.rbegin()).first);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& f, vector<int>& p) {
        map<int,int>mp={{0,0}};
        for(auto &e:f){
            mp[e[0]]++;
            mp[e[1]+1]--;
        }
        int cum=0;
        for(auto &e:mp){
            e.second += cum;
            cum=e.second;
        }
        vector<int>ans;
        for(auto &i:p){
            auto it = mp.lower_bound(i);
            if(it == mp.end() || it->first > i)
                it--;
            ans.push_back(it->second);
        }
        return ans;
    }
};
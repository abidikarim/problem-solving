class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        map<int, int>mp{{0,0}};
        vector<int>ans;
        for(auto &v:flowers){
            mp[v[0]]++;
            mp[v[1]+1]--;
        }

        int cum =0;
        for(auto &m:mp){
            m.second +=cum;
            cum = m.second;
        }

        for(int &p:people){
            auto it = mp.lower_bound(p);
            if(it == mp.end() || it->first > p)
                it--;
            ans.push_back(it->second);
        }
        return ans;
    }
};
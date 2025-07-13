class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& v1, vector<vector<int>>& v2) {
      map<int,int>mp;
    //   for(auto item:{v1,v2}) {
    //     for(auto &p:item ) {
    //         mp[p[0]] += p[1];
    //     }
    //   }
    for(auto e:v1){
        mp[e[0]]+=e[1];
    }
    for(auto e:v2){
        mp[e[0]]+=e[1];
    }

        vector<vector<int>>ans;
        for(auto &i:mp){
             ans.push_back({i.first,i.second});
        }
        return ans;
    }
};
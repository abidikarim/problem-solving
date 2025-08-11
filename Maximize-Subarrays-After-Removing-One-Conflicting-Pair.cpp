class Solution {
public:
    long long get(long long d){
        return d;
    }
    long long maxSubarrays(int n, vector<vector<int>>& c) {
       set<pair<long long ,long long>>st;
       int m=c.size();
       for(int i=0; i<m; i++){
            if(c[i][0] > c[i][1]) swap(c[i][0],c[i][1]);
       }
       sort(c.begin(),c.end());
       vector<long long>gainIfDeleted(m,0);
       long long sm=0;
       long long mxGain=0;
       int j=m-1;
       for(int i=n; i>0; i--){
            long long tot=0;
            while(j>-1 && c[j][0] >=i){
                st.insert({c[j][1],j});
                j--;
            }
            if(st.empty()){
                tot = get(n-i+1);
            }else {
                auto it=st.begin();
                int miEnd =(*it).first;
                int delId =(*it).second;
                tot = get(miEnd-i);
                if(st.size() > 1){
                    it = next(it);
                    miEnd = (*it).first;
                }else {
                    miEnd = n+1;
                }
                int _tot= get(miEnd-i);
                gainIfDeleted[delId]+=_tot - tot;
                mxGain = max(mxGain,gainIfDeleted[delId]);
            }
            sm+=tot;
       }
       return sm+mxGain;
    }
};
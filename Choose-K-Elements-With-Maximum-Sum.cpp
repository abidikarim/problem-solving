class Solution {
public:
    vector<long long> findMaxSum(vector<int>& v1, vector<int>& v2, int k) {
       map<int,vector<int>>mp;
       int n=v1.size();
        for(int i=0; i<n; i++){
            mp[v1[i]].push_back(i);
        }
        multiset<int>st;
        vector<long long>ans(n);
        long long sum=0;
        for(auto e:mp){
            for(auto &a:e.second){
                ans[a]=sum;
            }
            for(auto &a:e.second){
                int val= v2[a];
                if(st.size() < k){
                    sum+=val;
                    st.insert(val);
               }else if(val > *st.begin()){
                 int r= *st.begin();
                 sum-=r;
                 sum+=val;
                 st.erase(st.lower_bound(r));
                 st.insert(val);
               }
            }
        }
        return ans;
    }
};
class Solution {
public:
    int distinctAverages(vector<int>&v) {
      multiset<int>st(v.begin(),v.end());
      set<double>ans;
      while(!st.empty()){
            double avg= (*st.begin() + *st.rbegin()) /2.0 ;
            ans.insert(avg);
            st.erase(st.begin());
            if(!st.empty()) st.erase(prev(st.end()));
      }  
      return ans.size();
    }
};
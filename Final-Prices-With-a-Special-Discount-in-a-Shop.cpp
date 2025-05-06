class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
      vector<int>ans(prices.begin(),prices.end());
        stack<int>st;
      for(int j=0;j<prices.size();j++){
        while(!st.empty() && prices[j]<=prices[st.top()]) {
            ans[st.top()] -=prices[j];
            st.pop();
        }
        st.push(j);
      }  
      return ans;
    }
};
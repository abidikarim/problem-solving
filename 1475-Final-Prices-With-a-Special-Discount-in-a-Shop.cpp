class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
       stack<int>st;
       vector<int>ans(prices.begin(), prices.end());
       for(int i=0; i<prices.size(); i++){
            while(!st.empty() && prices[st.top()] >= prices[i]){
                ans[st.top()] -= prices[i];
                st.pop();
            }
            st.push(i);
       }
       return ans;
    }
};
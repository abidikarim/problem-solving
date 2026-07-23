class Solution {
public:
    int clumsy(int n) {
       int ans = 0;
       int op = 0;
       stack<int>st;
       st.push(n);
       for(int i=n-1; i>=1; i--){
            if(op == 0 || op == 1){
                int x = st.top();
                st.pop();
                st.push(op == 0 ? x*i : x/i);
            }else {
                st.push(op == 2 ? i : -i);
            }
            op = (op+1) % 4;

       } 
       while(!st.empty()){
            ans += st.top();
            st.pop();
       }
       return ans;
    }
};
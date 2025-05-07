class Solution {
public:
    int minSwaps(string s) {
      int cnt=0, ans=0;
      for(auto &c:s) {
        if(c =='[') cnt++;
        else cnt--;
        if(cnt < 0) {
            cnt=1;
            ans++;
        }
      }  
      return ans;
    }
};
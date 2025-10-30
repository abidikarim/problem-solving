class Solution {
public:
    int arrangeCoins(int n) {
       int l = 0;
       int r = n;
       while(l<=r){
          long long mid = (l+r)/2;
          long long sum = (mid*(mid+1)) /2;

          if(sum == n){
            return mid;
          }else if(sum < n){
            l = mid+1;
          }else {
            r = mid-1;
          }
       }
       return r;
    }
};
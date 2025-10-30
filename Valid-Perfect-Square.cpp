class Solution {
public:
    bool isPerfectSquare(int num) {
       int l = 0;
       int r = num;

       while(l<=r){
           long long mid = (l+r)/2;
           long long p = mid * mid;
           if(p == num){
            return true;
           }else if(p > num){
            r = mid-1;
           }else {
            l = mid+1;
           }
       }
        return false;
    }
};
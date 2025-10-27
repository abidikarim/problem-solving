class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int n = s.size();
        int div = pow(10, n-k);
        int x = num / div;
        int ans = num % x == 0;
        div = pow(10, k-1);
        int i = 0;
        while(i+k < n){
            x %= div;
            x *= 10;
            x+= s[i+k]-'0';
            if(x && num % x ==0)
                ans++;
            i++;
        }
        return ans;
    }
};  
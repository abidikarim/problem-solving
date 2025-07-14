class Solution {
public:
int count(int x){
    int ans=0;
    while(x>=1){
        if(x%2 == 1)ans++;
        x/=2;
    }
    return ans;
}
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i=0; i<=n; i++){
            ans[i]= count(i);
        }
        return ans;
    }
};
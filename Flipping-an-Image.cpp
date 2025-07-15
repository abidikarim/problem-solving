class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& v) {
        vector<vector<int>>ans;
        int n=v.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                v[i][j] == 0 ? v[i][j]=1 :v[i][j]=0;
            }
        }
        for(int i=0; i<n; i++){
             vector<int>x;
            for(int j=n-1; j>=0; j--){
                x.push_back(v[i][j]);
            }
            ans.push_back(x);
        }
        return ans;
    }
};
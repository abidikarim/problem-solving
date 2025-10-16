class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
     vector<int>ans;
     int n = arr.size();
     int mx = -1;
     for(int i=n-1; i>= 0; i--){
        if(i == n-1){
            ans.push_back(-1);
            continue;
        }
        mx = max(mx, arr[i+1]);
        ans.push_back(mx);
     }
     reverse(ans.begin(), ans.end());
     return ans;
    }
};
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       map<int,int>mp;
       int count=0;
       for(int i=0;i<m; i++){
            if(nums1[i]!=0){
                mp[nums1[i]]++;
                count++;
            }
       } 
       for(int i=0; i<n; i++){
           if(nums2[i]!=0){
             mp[nums2[i]]++;
             count++;
           }
       }
       while(count < n+m){
            mp[0]++;
            count++;
       }
       nums1.clear();
        for(auto [key,val]:mp){
            for(int i=0; i<val; i++){
                nums1.push_back(key);
            }
        }
    }
};
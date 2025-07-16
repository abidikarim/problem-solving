class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        set<int> result;
        for (int j = 0; j < n; ++j) {
            if (nums[j] == key) {
                int start = max(0, j - k);
                int end = min(n - 1, j + k);
                for (int i = start; i <= end; ++i) {
                    result.insert(i);
                }
            }
        }
         
         return vector<int>(result.begin(),result.end());
    }
};
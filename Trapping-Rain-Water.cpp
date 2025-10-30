class Solution {
public:
    int trap(vector<int>& height) {
        int st = 0;
        int end = height.size()-1;
        int result = 0;

        int mxl = height[st];
        int mxr = height[end];

        while(st<end){
           if(mxl <= mxr){
                st++;
                mxl = max(mxl, height[st]);
                result += mxl - height[st];
           }else {
                end--;
                mxr = max(mxr, height[end]);
                result += mxr - height[end];
           }
        }
        return result;
    }
};
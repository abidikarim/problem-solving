class Solution {
public:
    int pivotIndex(vector<int>& v) {
        int n = v.size();
        int sumLeft =0, sumRight= accumulate(v.begin(), v.end(),0);

        for(int i=0; i<n; i++){
            sumRight-=v[i];
            if(sumRight == sumLeft){
                return i;
            }
            sumLeft+=v[i];
        }
        return -1;
    }
};
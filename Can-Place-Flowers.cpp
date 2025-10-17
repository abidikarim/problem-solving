class Solution {
public:
    bool canPlaceFlowers(vector<int>& fl, int n) {
        int s= fl.size();
        for(int i=0; i<s; i++){
            if(fl[i] == 0){
                bool emptyLeft = (i == 0) || fl[i-1] == 0;
                bool emptyRight = (i == s-1) || fl[i+1] == 0;
                if(emptyLeft && emptyRight){
                    n--;
                    fl[i] =1;
                }
            }
        }
        return n <= 0;
    }
};
class Solution {
public:
    int maxBottlesDrunk(int nb, int nx) {
        int ans = nb;


         while(nb >= nx){
            nb-= nx;
            nx++;
           ans++;
           nb++;
        }

        return ans;
    }
};
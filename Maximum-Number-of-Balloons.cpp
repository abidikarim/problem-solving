class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int>mp;
        for(char c:text){
            mp[c]++;
        }

        return min({mp['a'], mp['b'], mp['l']/2, mp['o']/2, mp['n']});
    }
};
class Solution {
public:
    static bool compare(string a, string b){
            return a+b > b+a;
        }
    string largestNumber(vector<int>& nums) {
        vector<string>v;
        for(int x:nums){
            v.push_back(to_string(x));
        }
        sort(v.begin(), v.end(), compare);
        if(v[0] == "0")
            return v[0];
        string res;
        for(string s:v)
            res+=s;
        return res;
    }
};
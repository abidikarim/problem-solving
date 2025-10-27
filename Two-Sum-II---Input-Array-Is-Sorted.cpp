class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int i = 0;
      int j = numbers.size()-1;

      while(i<j){
        int s = numbers[i] + numbers[j];
        if(target == s)
            return {i+1, j+1};
        else if(s > target)
            j--;
        else 
            i++;
      }  
      return {};
    }
};
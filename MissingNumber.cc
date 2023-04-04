//Here is my attempt to the question
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x = nums.size(), sum = (x*(x+1))/2; 
        int total = 0;
        for (int i=0; i<x; i++) {
            total+=nums[i];
        }
        return (sum - total); 
    }
};
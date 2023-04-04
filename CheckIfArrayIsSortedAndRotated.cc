//Here is my attempt to the question

class Solution {
public:
    bool check(vector<int>& nums) {
    int counter = 0;
    int x = nums.size();
    for (int i=0;i<x-1;i++)
    {
        if (nums[i+1]<nums[i])
            counter++;
    }
    if(nums[0]<nums[x-1])
        counter++;
    if(counter==0 || counter==1)
    return true;
    else return false;

    }
};
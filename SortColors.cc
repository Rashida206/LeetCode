//Here is my attempt to the question
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int counter[3]={0}, color=0;
        
        for (int i = 0; i < nums.size(); i++) 
            counter[nums[i]]++;
        
        int idx=0;
        for(int i=0;i<=2;i++){
            for(int j=0; j < counter[i]; j++)
                nums[color++]=i;
        }
    }
};
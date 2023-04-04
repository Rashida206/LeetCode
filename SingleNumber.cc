//Here is my attempt to the question
class Solution {
public:
    int singleNumber(vector<int>& nums) {
          int x=nums.size();
          unordered_map<int,int> mm;

          for(int i=0;i<=x-1;i++){
              mm[nums[i]]++;
          }
          
          for(auto x: mm){
              if(x.second==1){ 
                  return x.first; 
                  break;
                }
          }
          return 0;
    }
};
class Solution {
public:
    bool check(vector<int>& nums) {
          int drop=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
             drop++;
            }
           
        }
        
 if(drop>=1){
     if(nums[nums.size()-1]>nums[0]){
            drop++;
           }
 }

        if(drop<=1){
            return true;
        }
        else{
            return false;
            }
    }
};
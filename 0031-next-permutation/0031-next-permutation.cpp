class Solution {
public:
    void nextPermutation(vector<int>& nums) {
           int size=nums.size();
        int index=20;
        for(int i=nums.size()-2;i>=0;i--){
            if((nums[i]<nums[i+1])){
                index=i;
                break;
            }
            
            
        }if(index==20){
            sort(nums.begin(),nums.end());
        }
        else{
        //
          sort(nums.begin()+index+1,nums.end());
          
          
          for(int i=index+1;i<nums.size();i++){
              
              if(nums[index]<nums[i]){
                  
                 swap(nums[index],nums[i]);
                 break;
              
          }
              
          }
            
        }
    }
};
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
            // Your code here
        sort(nums.begin(),nums.end());
        // if(nums.size()==1){
        //     return 1;
        // }
       if(nums[nums.size()-1]<0){
        return 1;
        
       }


        if(nums.size()==1 && nums[0]>1){
            return 1;
        }
       else if(nums.size()==1 && nums[0]<1){
            return 1;
        } 
        
        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<0){
                if(nums[i+1]>1){
                    return 1;
                }
                continue;
            }
            
            
            if(nums[0]>1){
                return 1;
                break;
            }
            // if(nums[i]==nums.size()-1){
            //     return (nums[i]+1);
            //     break;
            // }
       
            
            if(abs(nums[i]-nums[i+1])>1 ){
                return (nums[i]+1);
                break;
            }
            
            
            
        }return (nums[nums.size()-1]+1);
     
     
    }
};
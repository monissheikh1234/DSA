class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=1;
        int j=1;
       

        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                x=x+1;
            }
            else{
                x=1;
            }
 
            if(x<=2){
                // it=remove(nums.begin()+i,nums.end(),nums[i]);
                // x=0;
                nums[j]=nums[i];
                j++;

            }
        }



    return j;
        
    }
};
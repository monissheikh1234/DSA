class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
          int left=0;
      int right=nums.size()-1;
      int pos=nums.size()-1;
      vector<int>result(nums.size());
    
     for(int i=0;i<nums.size();i++){
        nums[i]=nums[i]*nums[i];
     }
  while(left<=right){
    if(nums[left]>=nums[right]){
        result[pos]=nums[left];
        left++;
        
    }
    else{
        result[pos]=nums[right];
        right--;
    }
    pos--;
  }

return result;


    }
};

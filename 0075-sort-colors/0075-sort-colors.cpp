class Solution {
public:
    void sortColors(vector<int>& nums) {
      int countz=0;
      int countone=0;
      int countt=0;

      for(int i=0;i<nums.size();i++){
    if(nums[i]==0)
    countz++;
    
    else if( nums[i]==1)
    countone++;
    
    else
    countt++;
    

      }


for(int i=0;i<countz;i++){
    nums[i]=0;
}
for(int i=countz;i<countz+countone;i++){
    nums[i]=1;
}
for(int i=countone+countz;i<nums.size();i++){
    nums[i]=2;
}

        
    }
};
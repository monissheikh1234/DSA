class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcons=0;
        int currcons=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                currcons=currcons+1;
                maxcons=max(currcons,maxcons);
            }
            else{
                currcons=0;}
                
        }
        return maxcons;
    }
};
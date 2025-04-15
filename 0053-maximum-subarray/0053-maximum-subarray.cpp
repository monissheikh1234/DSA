class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
      int currsum=nums[0];
      int maxsum=nums[0];
      for(int i=1;i<n;i++){
        currsum=max(nums[i],currsum+nums[i]);
        maxsum=max(currsum,maxsum);
      }
      return maxsum;
    }
};
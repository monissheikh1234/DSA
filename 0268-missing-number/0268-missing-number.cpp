class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // unordered_map<int,int>umap;
        // for(int i=0;i<nums.size();i++){
        //     umap[nums[i]]++;
        // }

sort(nums.begin(),nums.end());
 // Check if 0 is missing
        if (nums[0] != 0) return 0;
        
for(int i=0;i<nums.size()-1;i++){
    if((nums[i+1]-nums[i])!=1){
        return nums[i]+1;
    }
}
return nums[nums.size()-1]+1;


    }
};
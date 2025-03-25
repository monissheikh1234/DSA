class Solution {
public:
    void getSubsets(vector<int> &nums, vector<int>& ans,int i, vector<vector<int>> &printSubsets){
        if(i==nums.size()){
            printSubsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        getSubsets(nums,ans,i+1,printSubsets);
        ans.pop_back();
        int idx = i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }
        getSubsets(nums,ans,idx,printSubsets);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<vector<int>> printSubsets;
        getSubsets(nums,ans,0,printSubsets);
        return printSubsets;
    }
};
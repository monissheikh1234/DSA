class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>umap;
        int result;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
     umap.find(1);


   for (const auto & pair : umap) {
        if (pair.second == 1) {
            result=pair.first;
        }
    }

    return result;
    }
    
};
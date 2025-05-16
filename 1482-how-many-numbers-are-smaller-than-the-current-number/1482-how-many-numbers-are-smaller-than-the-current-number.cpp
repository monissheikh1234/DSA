class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
     int size=nums.size();
     vector<int>sorted_nums=nums;;
     vector<int>result;
     unordered_map<int,int>umap;
     sort(sorted_nums.begin(),sorted_nums.end());
     for(int i=0;i<size;i++){
        if(umap.find(sorted_nums[i])==umap.end()){
            umap[sorted_nums[i]]=i;
        }
     }
    for(int i=0;i<size;i++){
   result.push_back(umap[nums[i]]);
    }

return result;
    }
};
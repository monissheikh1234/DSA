class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        int greater=nums.size()/2;
        vector<int>result;
        unordered_map<int,int>::iterator it;
        for(it=umap.begin();it!=umap.end();it++){
            if( (it->second)>greater ){
                result.push_back(it->first);
            }
            // return -1;
        }
        if(result.empty()){
            return 0;
        }
        sort(result.begin(),result.end());
        return result[result.size()-1];
     
    }
};
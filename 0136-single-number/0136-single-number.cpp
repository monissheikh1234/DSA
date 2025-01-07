class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //umap takes o(n)space comp.
//         unordered_map<int,int>umap;
//         int result;
//         for(int i=0;i<nums.size();i++){
//             umap[nums[i]]++;
//         }
//     //  umap.find(1);


// //    for (const auto & pair : umap) {
// //         if (pair.second == 1) {
// //             result=pair.first;
// //         }
// //     }
// unordered_map<int,int>::iterator it;
// for(it=umap.begin();it!=umap.end();it++){
//     if(it->second==1){
//         result=it->first;
//     }
// }

//     return result;
//     }
    






int result=0;
for(int i=0;i<nums.size();i++){
    result=result^nums[i];
}
return result;}
};
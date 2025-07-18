// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         // unordered_map<int,int>umap;
//         // for(int i=0;i<nums.size();i++){
//         //     umap[nums[i]]++;
//         // }

// // sort(nums.begin(),nums.end()); //nlogn
// //  // Check if 0 is missing
// //         if (nums[0] != 0) return 0;

// // for(int i=0;i<nums.size()-1;i++){
// //     if((nums[i+1]-nums[i])!=1){
// //         return nums[i]+1;
// //     }
// // }
// // return nums[nums.size()-1]+1;


//     }
// };


class Solution {
public:
    int missingNumber(vector<int>& nums) {
int n=nums.size();
int x=n*(n+1)/2;
int rs=0;
for(int i=0;i<n;i++){
    rs+=nums[i];
}
return x-rs;
    }
};

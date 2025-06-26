class Solution {
public:
      int getpivot(vector<int>& arr) {
        int l = 0;
        int r = arr.size()-1;
        
        while(l<r){
            int mid = l +(r-l)/2;
            if(arr[mid]>=arr[0]){
                l = mid+1;
            }
            else{
                r = mid;
            }
          
        }
   return l; 
   }
   
    int bs(vector<int>& nums,int low,int high,int target){
        if(low>high){
            return -1;
        }
        int mid=(low+high)/2;

        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]>target){
            return bs(nums,low,mid-1,target);
        }else{
            return bs(nums,mid+1,high,target);
        }

    }
   int search(vector<int>& nums, int target) {
     int n  = nums.size();
        int pivot = getpivot(nums);
        if(target>=nums[pivot] && target<=nums[n-1]){
            return bs(nums,pivot,n-1,target);
        }
      else{
        return bs(nums,0,pivot-1,target);
      }
    }
};
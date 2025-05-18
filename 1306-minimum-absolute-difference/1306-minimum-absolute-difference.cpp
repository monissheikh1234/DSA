class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int min=INT_MAX;
        vector<vector<int>>ans;

        for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]<min){
            min=arr[i]-arr[i-1];
        }
        }

   for(int i=1;i<n;i++){
if(abs(arr[i]-arr[i-1])==min){
    ans.push_back({arr[i-1],arr[i]});
}
   }
return ans;


    }
};
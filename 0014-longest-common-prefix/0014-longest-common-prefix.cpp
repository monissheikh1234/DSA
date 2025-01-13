class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string max="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        int i=0;
        while(i<strs[0].size() &&    strs[0][i]==strs[n-1][i]){
            max+=strs[0][i];
            i++;
        }
        
        return max;

    }
};
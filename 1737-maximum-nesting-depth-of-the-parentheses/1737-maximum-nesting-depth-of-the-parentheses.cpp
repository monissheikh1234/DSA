class Solution {
public:
    int maxDepth(string s) {
        int currcount=0;
        int maxcount=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                currcount++;
                maxcount=max(currcount,maxcount);
            }
            if(s[i]==')'){
                currcount--;
            }
        }
        return maxcount;
    }
};
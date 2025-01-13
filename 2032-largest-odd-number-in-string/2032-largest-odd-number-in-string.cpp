class Solution {
public:
    string largestOddNumber(string num) {
        int currhigh=0;
        int lastindex=-1;
        string max;
        
       for(int i=num.size()-1;i>=0;i--){
        if ((num[i] - '0') % 2 != 0) {
    lastindex = i;
    break;
}

       }
       if(lastindex==-1){
        max= "";
       }
       else{
        for(int i=0;i<=lastindex;i++){
          max+=num[i];
        }
       }
       return max;

    }
};
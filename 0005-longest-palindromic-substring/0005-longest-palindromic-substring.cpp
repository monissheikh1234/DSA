class Solution {
public:
// Helper function to expand around the center
string expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}
    string longestPalindrome(string s) {
          if (s.empty()) return "";
    
    string longest = "";
    for (int i = 0; i < s.size(); i++) {
        // Odd-length palindrome
        string oddPalindrome = expandAroundCenter(s, i, i);
        if (oddPalindrome.size() > longest.size()) {
            longest = oddPalindrome;
        }
        
        // Even-length palindrome
        string evenPalindrome = expandAroundCenter(s, i, i + 1);
        if (evenPalindrome.size() > longest.size()) {
            longest = evenPalindrome;
        }
    }
    return longest;
    //     string result;
    //     int max=0;
    //     int count=0;
    //     for(int i=0;i<s.size();i++){
    //      for(int j=s.size()-1;s>=0;s++){
    //         if(s[j]==s[i]){
    //         left=i;right=j;
    //        while(left<=right){
    //    if(s[left]!=s[right]){
    //     break;
    //    }else{
    //     currstring.push_back=s[left];
    //     count=currstring.size();
    //     maxcount=max(count,max);
    //     if(count>max){
    //         result.
    //     }
    //    }
    //        }
    //         }
    //      }
    //     }
    }
};
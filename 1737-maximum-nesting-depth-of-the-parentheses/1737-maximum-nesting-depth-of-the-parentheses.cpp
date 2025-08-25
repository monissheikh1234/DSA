#include<bits/stdc++.h>

class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int maxsize=0;
        for(char ch: s){
            if(ch=='('){
                st.push('(');
                maxsize=max(maxsize,(int)st.size());
            }
            else if(ch==')'){
                st.pop();
            }
        }
        return maxsize;
    }
};


// class Solution {
// public:
//     int maxDepth(string s) {
//         int depth = 0;     // Current depth
//         int maxDepth = 0;  // Maximum depth seen so far

//         for(char ch : s) {
//             if(ch == '(') {
//                 depth++;                // Increase current depth
//                 maxDepth = max(maxDepth, depth); // Update max depth
//             } else if(ch == ')') {
//                 depth--;                // Decrease depth
//             }
//         }

//         return maxDepth;
//     }
// };

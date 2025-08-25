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
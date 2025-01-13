class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>umap1,umap2;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(umap1.find(s[i])!=umap1.end()){
                if(umap1[s[i]]!=t[i]){
                    return false;
                }
            }


             if(umap2.find(t[i])!=umap2.end()){
                if(umap2[t[i]]!=s[i]){
                    return false;
                }
            }
            else{
                umap1[s[i]]=t[i];
                umap2[t[i]]=s[i];
            }
           
        }

        return true;





    }
};
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i1 = 0 ; 
        int i2 = 0 ;
        string s = ""; 
        while (i1 < word1.size()  && i2 < word2.size()){
            s += word1[i1++];
            s += word2[i2++];
        }
        while (i1 < word1.size() ){
            s += word1[i1++];
        }
        while (i2 < word2.size()){
            s += word2[i2++];
        }
        return s ; 
    }
};
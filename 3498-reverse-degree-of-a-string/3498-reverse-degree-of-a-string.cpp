class Solution {
public:
    int reverseDegree(string s) {
        int degree = 0 ; 
        for(int i = 0 ; i < s.size() ; i++){
            int val = 'a' - s[i] + 26 ;
            degree += (i+1) * val ;
        }
        return degree ;
    }
};
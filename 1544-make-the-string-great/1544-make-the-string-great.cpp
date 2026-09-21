class Solution {
public:
    string makeGood(string s) {
        string result = "";
        int i = 0 ;
        int j = 1 ; 
        while(j < s.size()){
            if (s[i] - s[j] == 32 || s[j] - s[i] == 32){
                s.erase(i , 2);
                if (i != 0) {
                    i -- ;
                    j -- ;
                }    
            }else{
                i++ ; 
                j++ ;
            }
        }
        return s ;
    }
};
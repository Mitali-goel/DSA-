class Solution {
public:
    bool isPalindrome(int x) {
        double rev = 0 ;
        int ori = x ;
        int lastno = 0 ; 
         if(x < 0) return false ;
         while (x>0){
            lastno = x%10 ; 
            x = x/10;
            rev = rev*10 + lastno ;
         }
         if (ori == rev){
            return true;
         }else {
             return false ;
         }
    }
};
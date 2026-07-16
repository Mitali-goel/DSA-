class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n < 0 )  return false;
        if ((n & (n-1))== 0){
            // bool flag = 0 ; 
            // while (n!=0 && flag == 0){
            //     if (n & 1){
            //     flag = 1 ;
            //     return true ;
            //     }
            //     n = n >> 2;
            // }

            if (n & 0x55555555){
                return true ;
            }
        }
        return false ; 
    }
};
class Solution {
public:


        int reverse (int n ){
            int x = 0 ; 
            int digit = 0 ; 
            while (n != 0){
                digit = n%10;
                n = n/10 ; 
                x = x*10 + digit;
            }
            return x ;
        }




    long long sumAndMultiply(int n) {
        if (n == 0)      return 0 ;

        int x = 0 ; long long sum = 0 ; 
        int digit = 0 ; 
        while (n != 0){
            digit = n%10;
            n = n/10;
            if (digit != 0){
                sum += digit ; 
                x = x*10 + digit ; 
            }
        }
        long long result = sum * reverse(x);
        return result ;
    }
};
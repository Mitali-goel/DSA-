class Solution {
public:

    long long  mod = 1000000007; 

    long long pow (int base , long long n){
        
        if(n == 0){
            return 1 ;
        }if (n== 1){
            return base ;
        }

        long long  ans = pow (base , n/2);
        ans = ans % mod;

        if (n%2 == 1){
            return ((base * ans )%mod * ans) % mod ;
        }else {
             return (ans * ans ) % mod;
        }
    }




    int countGoodNumbers(long long n) {
        long long ans = pow (5, n/2) * pow (4 , n/2);
        ans = ans % mod;
        if (n%2 == 1){
            return( 5  * ans)% mod ; 
        }
            return (int)ans   ;  
    }
};
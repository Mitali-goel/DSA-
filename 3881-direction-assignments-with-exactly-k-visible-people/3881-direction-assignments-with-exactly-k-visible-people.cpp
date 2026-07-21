class Solution {
public:
    long long m = 1000000007;
    // long long power (long long a , long long b ){
    //     if (b == 0){
    //         return 1 ;
    //     }
    //     long long ans = power(a , b/2) % m ;
    //     long long result = ans * ans % m ;
    //     if (b % 2 == 1){
    //         result = result * a % m ;
    //     }
    //     return result ;
    // }


    long long power(long long a , long long b){

        long long ans = 1;
        while(b > 0){
            if (b % 2 == 1){
                ans = ans * a % m;  
                b -- ;
            }
            a = a*a  % m;
            b /= 2 ;
        }
        return ans ;
    }

    int countVisiblePeople(int n, int pos, int k) {

        if (k > (n-1)/2){
            k = n-1- k ;
        }

        long long num = 1 ; 
        long long den = 1 ;
        for (int i = 1 ; i <= k ; i++){
            num = num * (n-i) % m;
            den = den * i  % m;
        }

        long long reverseden = power(den , m-2) % m ;

        int result = 2 *( num  % m ) * reverseden % m ;
        return result ;
        
    }
};
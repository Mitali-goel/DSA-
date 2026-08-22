class Solution {
public:
    bool checkDivisibility(int n) {
        int m = n ;
        long long sum = 0 ; 
        long long product = 1 ;
        while (m != 0){
            int last = m % 10 ; 
            sum += last ; 
            product *= last ;
            m = m / 10 ; 
        }
        long long total = sum + product ;
        if(n % total == 0){
            return true;
        }
        return false ;
    }
};
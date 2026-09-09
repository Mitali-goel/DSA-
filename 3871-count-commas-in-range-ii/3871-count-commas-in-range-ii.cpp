class Solution {
public:
    long long countCommas(long long n) {
        long long commas = 0 ;
        if(n <= 999){
            return 0 ;
        }
        commas = n - 999;
        if (n <= 999999){
            return commas ;
        }
        commas += n - 999999;
        if (n <= 999999999){
            return commas ;
        }
        commas += n - 999999999;
        if(n <= 999999999999){
            return commas ;
        }
        commas += n - 999999999999;
        if(n <= 999999999999999){
            return commas ;
        }
        commas += n - 999999999999999;
        return commas ;
    }
};
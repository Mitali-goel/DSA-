class Solution {
public:
    long long flowerGame(int n, int m) {
        long long nodd ;
        if (n % 2 != 0)     nodd = n /2 + 1  ; 
        else                nodd = n /2 ; 
        long long neven = n/2;
        long long modd;
        if (m % 2 != 0)     modd = m/2 +1;
        else                modd = m/2;
        long long meven = m/2 ;

    return (nodd * meven) + (neven * modd);
    }
};
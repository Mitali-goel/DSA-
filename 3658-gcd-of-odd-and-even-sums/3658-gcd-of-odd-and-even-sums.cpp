class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0; 
        int sumEven = 0 ; 
        for (int i = 0 ; i <= 2*n ; i++){
            if (i%2 == 0){
                sumEven += i ; 
            }else {
                sumOdd += i ; 
            }
        }
        int gcd = 1 ; 
        for(int i = 2 ; i <= sumEven ; i++){
            if (sumOdd % i == 0 && sumEven %i == 0){
                gcd = i ; 
            }  
        }
    return gcd ;
    }
};
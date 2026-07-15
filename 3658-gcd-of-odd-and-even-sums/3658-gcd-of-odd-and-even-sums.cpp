class Solution {
public:
    int gcdOfOddEvenSums(int n) {

// brutte force  TC = O(N)

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


// OPTIMAIZED           TC O(1)

// sum of 2n even no = n * (n+1);

// Sum of 2n no. = 2n * (2n+1)/2 ; ===== n * (2n+1)

// so sum of 2n odd no is =  n* (2n+1) - n * (n+1) ==== n*n == n sq .

// gcd of n*n and n*(n+1) is n itself 

    // return n ;
    }
};
class Solution {
public:

    // string deci2bin(int n ){
    //     string s ; 
    //     while (n!=0){
    //         s.push_back(n%2);
    //         n = n/2;
    //     }
    //     reverse(s.begin(), s.end());
    //     return s ;
    // }



    int hammingWeight(int n) {
    //     int count = 0;
    //     string s = deci2bin(n);
    //     for(int i = 0 ; i < s.size() ; i++){
    //         if (s[i] == 1)
    //         count++;
    //     }
    //     return count ; 





    // int count = 0 ; 
    // while (n!=0){
    //     if (n & 1 != 0){
    //         count++ ;  
    //     }
    //     n = n>>1 ;
    // }
    // return count ;


    int count = 0 ; 
    while (n != 0){
        count++ ; 

        n = n & n-1 ;
    }
    return count ;
    }
};
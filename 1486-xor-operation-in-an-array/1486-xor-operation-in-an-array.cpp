class Solution {
public:
    int xorOperation(int n, int start) {

//brutte force  TC + O(N) ; SC + O(1)        
        // int res = 0 ; 
        // for (int i =0 ; i < n ; i++){
        //         res = res ^ (start + 2*i);
        // }
        // return res ;

// OPTIMIZED SOLUTION    TC O(1) ; SC + O(1)
  
    int s = start >> 1 ; // divide start by 2 
    int e = s + n-1 ; 
    int XOR = findXOR(s-1) ^  findXOR(e);
    XOR = XOR << 1 ;    // multiply by 2 

/*  this if condition is applied if both start and n are odd integers 
  as we know when we divide the start by 2 the lsb is removed and when n is odd ( xor of odd no. of lsb results 1  ; xor of even no of lsb results 0) so no effect occur in even lsb but gives wrong output in odd n 

  example n = 5 ; start = 3 ;   

   Lost bits = [1,1,1,1,1] (five ones).

    XOR = 1.

    Formula without fix gives 2.

    Add back the 1 → 3. Correct.

*/
    if (n & start & 1){  
        XOR =  XOR | 1;
    }


    return XOR ;

    }

    int findXOR(int n ){
    if (n % 4 == 0 )   return  n ; 
    else if (n % 4 == 1 )   return  1 ; 
    else if (n % 4 == 2 )   return  n+1 ; 
    else if (n % 4 == 3 )   return  0 ;
    else return 0 ;  
}


};
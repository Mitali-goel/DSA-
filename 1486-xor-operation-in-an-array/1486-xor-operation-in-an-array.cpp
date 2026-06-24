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
class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == INT_MIN && divisor == -1) {return INT_MAX;}
        
        if (dividend == divisor) return 1;

        if (divisor == 1) return dividend; 

        bool sign = true ; 
        if ((dividend > 0 && divisor <0)|| (dividend < 0 && divisor > 0)){
            sign = false ; 
        }
 
    // int n = abs (dividend);
    // int d = abs (divisor);


    long long n = abs((long long)dividend);
    long long d = abs((long long)divisor);

// solution 1 tc = O(n/d) ; sc = O(1);        
        // int count = 0 ; int sum = 0 ; 
        //  while (n >= sum + d){
        //     sum += d;
        //     count++; 
        //  }
        //  if(!sign) {return -1 * count ;}
        // return count ; 



    int ans = 0 ; 
    while (n >= d){
      int count = 0 ; 
        while (n >=  (d<< (count+1))){
            count++;
        }
        n = n - d * (1<< count);
        ans += (1<<count);
    }

    if (ans >INT_MAX  && sign ) return INT_MAX;
    
    if (ans > INT_MAX   && !sign ) return INT_MIN;

   if(!sign) {return  -ans ;}
   return ans ; 

    }
};
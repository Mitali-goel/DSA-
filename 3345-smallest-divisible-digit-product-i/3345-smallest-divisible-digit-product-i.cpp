class Solution {
public:
    int smallestNumber(int n, int t) {
        for (int j = n ; j < INT_MAX ; j++){
            int p = 1 ; 
            int i = j ; 
            while (i != 0){
                int last = i % 10 ; 
                p *= last ; 
                i = i / 10 ;
            } 
            if (p % t == 0){
                return j ; 
            }
        }
      return 0 ; 
    }
};
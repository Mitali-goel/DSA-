class Solution {
public:
    int maxProduct(int n) {
        int first = 0 ;     int second = 0 ; 
        while(n != 0){
            int last = n % 10;
            n = n / 10;

            if (last >= first){
                second = first ;
                first = last ;
            }else if (last >= second){
                second = last ;
            }
        }
        return first * second ;
    }
};
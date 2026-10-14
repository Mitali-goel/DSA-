class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int count = 0 ; int total = 0; 
        string result = "" ; 
        while(count <  num){
            if (sum == 0){
                result += '0';
            }
            else if (sum < 9){
                result += to_string(sum);
                sum = 0 ;
            }else {
                sum -= 9 ; 
                result += '9';
            }
            count ++ ; 
        }
        if (total == sum){
            return result ; 
        }
        return "" ; 
    }
};
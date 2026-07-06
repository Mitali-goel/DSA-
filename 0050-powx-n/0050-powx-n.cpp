class Solution {
public:
    double myPow(double x, int n) {
        if (n==0){
                return 1;
            }

    double ans = myPow( x , n/2);

        if (n > 0){
            if (n == 1){
                return x;
            }
            if(n%2== 0){
                return ans * ans ;
            }else if (n%2 == 1){
                return x * ans * ans ;
            }
        }else {
            if(n%2== 0){
            return   ans * ans;
            }else if (n%2 == -1){
                return (1/x) * ans * ans ;
            }
        }
        return 0 ; 
    }
};
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int result = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            int n = nums[i];
            int count = 2 ;
            int sum = n + 1; 
            for (int j = 2 ; j <= sqrt(n) ; j++){
                if (n % j == 0){
                    sum += j ; 
                    if (j == sqrt(n) ) count += 1 ;
                    else {
                        sum += n/j;
                        count += 2 ;
                    }
                }
                if (count > 4){
                    break ; 
                }
            }
            if (count == 4){
                result += sum ; 
            }
        }
        return result ; 
    }
};
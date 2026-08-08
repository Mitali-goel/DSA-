class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int count = 0 ; 
        for (int i = 0 ; i < nums.size() ; i++){
            long long  sum = 0 ; 
            for (int j = i ; j < nums.size() ; j++){
                sum += nums[j];
                long long n = sum; 
                int l = n % 10 ;
                int last ; 
                while(n != 0){
                    last = n % 10 ; 
                    n = n / 10 ;
                }
                int f = last ; 
                if (l == x && f == x){
                    count ++ ; 
                }   
            }
        }
        return count ;  
    }
};
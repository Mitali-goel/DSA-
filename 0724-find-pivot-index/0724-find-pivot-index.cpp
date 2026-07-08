class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();    
        // vector<int> prefix (n) ; 
        // vector<int> suffix (n) ;  

        // for(int i = 1 ; i < n ; i++){
        //     prefix[i] = prefix[i-1] + nums[i-1];
        //     suffix[n-i-1] = suffix[n-i] + nums[n-i];
        // } 

        // for (int i = 0 ; i < n ; i++){
        //     if (prefix[i] == suffix[i]){
        //         return i;
        //     }
        // }     
        // return -1 ;

        int sum = 0 ; 
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
        }

        int left = 0 ; int right = 0 ;
        for (int i = 0 ; i < n ; i++){
            if (i!=0){ 
            left += nums[i-1];
            }
            right = sum - left - nums[i]; 
            if (left == right){
                return i ; 
            }
        }
        return -1 ; 
    }
};
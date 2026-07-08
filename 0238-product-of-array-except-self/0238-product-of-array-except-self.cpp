class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n = nums.size();

// PREFIX SUM        TC = O(N)        SC = O(n) + O(n)     

        // vector<int> prefix (n , 1);
        // vector<int> suffix (n , 1);
       
        // for (int i = 1 ; i < n ; i++){
        //     prefix[i] = prefix[i-1] * nums[i-1];
        //     suffix[n-i-1] = suffix[n-i] * nums[n-i];
        // }
        // vector<int> result ; 
        // for (int i = 0 ; i < nums.size(); i++){
        //     result.push_back(prefix[i] * suffix[i] );
        // }

        // return result ; 


// OPTIMIZED SOLUTION      TC = O(N)        SC = O(1)
        vector<int> result(n , 1) ; 
        for(int i = 1 ; i <n ; i++){
           result[i] = result[i] * result[i-1] * nums[i-1];
        }

        int suffix = 1 ; 
        for(int i = n-2 ; i >=0 ; i--){
            suffix *= nums[i+1];
            result [i] *= suffix;
        }

        return result ;
    }
};
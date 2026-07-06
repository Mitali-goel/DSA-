class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {

// BRUTTE FORCE          TC = O(n2)          SC = O(1)       

        // int maxSum = 0 ; 
        // for (int i = 0 ; i < nums.size() ; i++){
        //     for (int j = i+k ; j < nums.size() ; j++){
        //         maxSum = max(maxSum , nums[i] + nums[j]);
        //     }
        // }
        //  return maxSum ; 

// OPTIMAL SOLUTION       TC = O(N)         SC = O(1)

    int maxSum = 0 ; int bestLeft = 0 ; 
        for (int j = k ; j <nums.size() ; j++){ 
            bestLeft = max (bestLeft , nums[j-k]);
            // maxSum = max(maxSum , nums[j] + nums[j-k]);
            maxSum = max(maxSum , bestLeft + nums[j]);
        }
        return maxSum ; 
    }
};
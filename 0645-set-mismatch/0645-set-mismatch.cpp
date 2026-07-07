class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size() ; 
        int numsum = (n * (n+1)) / 2;
        long long  numsqsum = 1LL*(n)*(n+1)*(2*n +1)/6;
        int sum = 0 ; 
        long long sqsum = 0 ; 
        for (int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            sqsum+= 1LL *(nums[i] * nums[i]);
        }

        // as we know 
        // numSum - sum = missing - duplicate ; 
        // numSqSum - sqSum = missing sq - duplicate sq ; 

        int diff = numsum - sum ;  //(missing - duplicate)
     
        int sqDiff =(int)( numsqsum - sqsum );

        int k = sqDiff / diff ; // (missing + duplicate)


        int missing = (diff + k )/2  ;
        int duplicate =(k- diff)/2 ; 

        return {duplicate , missing};
    }
};
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int first = nums[n-1] ;
        nums.pop_back();
        n = n-1 ;
        int product = 1 ; 
        if ((first * nums[0] * nums[1]) > (first * nums[n-1] * nums[n-2])){
            product = nums[0] * nums[1] * first;
        }else{
            product = nums[n-1] * nums[n-2] * first;
        }
        return product  ;
    }
};
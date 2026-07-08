class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0 ; 
        int len = INT_MAX; 
        int sum = 0 ; 
        for(int r = 0 ; r <= nums.size() ; r++){
            while(sum >= target){
                len = min (len , r-l);
                sum -= nums[l];
                l++ ; 
            }
            if (r != nums.size())
             sum += nums[r]; 
        }
        if (len != INT_MAX)
        return len ;
        return 0; 
    }
};
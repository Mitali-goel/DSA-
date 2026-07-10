class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double maxAvgSum = 0 ;
        int l = 0 ; int r = k ; 

        for (int i = 0 ; i < k ; i++){
            maxAvgSum += nums[i];
        }

        double avgSum = maxAvgSum  ;

        while (r<nums.size()){
            avgSum = avgSum - nums[l++] + nums[r++];
            maxAvgSum = max(maxAvgSum , avgSum);
        }
        return maxAvgSum/k;
    }
};
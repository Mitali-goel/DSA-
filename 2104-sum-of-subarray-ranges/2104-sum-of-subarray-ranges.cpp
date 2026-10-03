class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum = 0 ;
        for (int i = 0 ; i < nums.size() ; i++){
            int minel = nums[i] ; int maxel = nums[i];
            for(int j = i+1 ; j < nums.size() ; j++){
                maxel = max (maxel , nums[j]);
                minel = min (minel , nums[j]); 
                sum += (maxel - minel);
            }
        }
        return sum ; 
    }
};
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest  = INT_MIN;
        int slargest = INT_MIN;
        for(int i = 0 ; i < nums.size(); i++){
            if (nums[i] >= largest){
                slargest = largest ;
                largest = nums[i];
            }else if (nums[i] > slargest){
                slargest = nums[i];
            }
        }
        return (largest - 1) * (slargest - 1);
    }
};
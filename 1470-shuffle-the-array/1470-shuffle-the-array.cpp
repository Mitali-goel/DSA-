class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
       int j ; 
        for (int i = 0 ; i < n ; i++){
            j = (nums.size()/2) + i;
            result.push_back(nums[i]);
            result.push_back(nums[j]);
        }
        return result ;
    }
};
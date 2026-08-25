class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i;
        for (i = 1 ; i  <= nums.size() ; i++){
            int j ;
            for (j = 0 ; j < nums.size() ; j++){
                if (nums[j] == i * k){
                    break ;
                }
            }
            if (j == nums.size()){
                return i * k ;
            }
        }
        return i * k ;
    }
};
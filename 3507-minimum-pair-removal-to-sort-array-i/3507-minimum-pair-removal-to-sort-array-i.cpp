class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int flag = 1 ; int count = 0 ; 
        while(flag == 1){
            int i ;
            for (i = 0 ; i < nums.size()-1 ; i++){
                if (nums[i] > nums[i+1]){
                    break ;
                }
            }
            if (i == nums.size() -1) {
                return count ; 
            }
            int sum = INT_MAX ; 
            for (int i = 0 ; i < nums.size()-1 ; i++){
                sum = min (sum , nums[i] + nums[i+1]);
            }
            for (int i = 0 ; i < nums.size()-1 ;i++){
                if (nums[i] + nums[i+1] == sum){
                    nums[i] = sum ; 
                    nums.erase(nums.begin() + i+1);
                    count++;
                    break ;
                }
            }
        }
        return count ;
    }
};
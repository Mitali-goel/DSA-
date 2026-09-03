class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int> prefix(nums.size() , 0);
        int even = 0 , odd = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            prefix[i] = odd;
            if (nums[i] % 2 == 0) even++;
            else odd++;
        }
        if (even == 0 || odd == 0){
            return true ;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if (nums[i] % 2 == 0){
                if(prefix[i] == 0){
                    return false ;
                }
                // int cnt = 0 ;
                // for(int j = 0 ; j < nums.size() ; j++){
                //     if (nums[j] < nums[i]  && nums[j] % 2 != 0){
                //         cnt ++ ; 
                //         break ;
                //     }
                // }
                // if (cnt == 0){
                //     return 0 ;
                // }
            }
        }
        return true ;
    }
};
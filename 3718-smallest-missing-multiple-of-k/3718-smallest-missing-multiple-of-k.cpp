class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // int i;
        // for (i = 1 ; i  <= nums.size() ; i++){
        //     int j ;
        //     for (j = 0 ; j < nums.size() ; j++){
        //         if (nums[j] == i * k){
        //             break ;
        //         }
        //     }
        //     if (j == nums.size()){
        //         return i * k ;
        //     }
        // }
        // return i * k ;


        sort(nums.begin() , nums.end());
        for (int i = 1 ; i <= nums.size() + 1 ; i++){
            int low = 0 ; int high = nums.size() - 1;
            while (low <= high){
                int mid = (low + high)/2;
                if (nums[mid] == i * k){
                    break ;
                }else if (nums[mid] > i * k){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }
            if (low > high){
                return i * k;
            }
        }
        return 0;
    }
};
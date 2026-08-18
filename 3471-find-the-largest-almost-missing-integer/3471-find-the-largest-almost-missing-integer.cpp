class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        // if (nums.size() == k){
        //     return *max_element(nums.begin() , nums.end());
        // }
        // map<int , int> mpp ; 
        // vector<int> result ; 
        // for (int i = 0 ; i <= nums.size()-k ; i++){
        //     for (int j = i ; j < i+k ; j ++){
        //         mpp[nums[j]]++;
        //     }
        // }
        // for (auto it : mpp){
        //     if(it.second == 1){
        //         result.push_back(it.first);
        //     }
        // }
        // if (result.size() == 0)  return - 1 ;
        // return *max_element(result.begin() , result.end());







        if (nums.size() == k){
            return *max_element(nums.begin() , nums.end());
        }
        vector<int>count (51 , 0);
        for (int i = 0 ; i < nums.size() ; i++){
            count[nums[i]]++;
        }
        if (k == 1){
            for(int i = 50 ; i >= 0 ; i--){
                if (count[i] == 1){
                    return i ;
                }
            }
            return -1 ;
        }
        if (count[nums[0]] == 1 && count[nums[nums.size() - 1]] == 1 ){
            return max (nums[0] , nums[nums.size() - 1]) ;
        }else if (count[nums[0]] == 1 && count[nums[nums.size() - 1]] > 1){
            return nums[0];
        }else if (count[nums[0]] > 1 && count[nums[nums.size() - 1]] == 1){
            return nums[nums.size() - 1];
        }
        return -1 ;
    }
};
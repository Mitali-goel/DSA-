class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if (nums.size() == k){
            return *max_element(nums.begin() , nums.end());
        }
        map<int , int> mpp ; 
        vector<int> result ; 
        for (int i = 0 ; i <= nums.size()-k ; i++){
            for (int j = i ; j < i+k ; j ++){
                mpp[nums[j]]++;
            }
        }
        for (auto it : mpp){
            if(it.second == 1){
                result.push_back(it.first);
            }
        }
        if (result.size() == 0)  return - 1 ;
        return *max_element(result.begin() , result.end());
    }
};
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxel = INT_MIN ; int minel = INT_MAX;
        for (int i = 0 ; i < nums.size() ; i++){
            maxel = max(maxel , nums[i]);
            minel = min(minel , nums[i]);
        }
        vector<int> result ; 
        if (nums.size() == maxel - minel +1)    return result ; 
        sort(nums.begin() , nums.end());
        int i = 0 ; 
        while(minel != maxel){
            if (nums[i] != minel){
                    result.push_back(minel);
            }else{
                i++ ; 
            }
            minel++ ; 
       }
       return result ; 
    }
};
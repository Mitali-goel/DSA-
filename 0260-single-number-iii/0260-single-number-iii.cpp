class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {


// first solution 
  vector<int> result;
    for (int i = 0 ; i < nums.size() ; i++){
        int count = 0 ; 
        for (int j = 0 ; j < nums.size() ; j++){
            if (nums[i] == nums[j]){
                count++; 
            }
        }
        if (count == 1){
            result.push_back(nums[i]);
        }
    }        
         return result ;
    }
};
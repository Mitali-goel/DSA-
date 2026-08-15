class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int XOR  = 0 ; 
        for (int i = 0 ; i < nums.size() ; i++){
            XOR  = XOR ^nums[i];
        }
        if (XOR  != 0 )   return nums.size();
        else {
            for (int i = 0 ; i < nums.size() ; i++){
                XOR  = XOR ^ nums[i];
                if (XOR  != 0){
                    return nums.size()-1 ;
                }else {
                    XOR  = XOR  ^ nums[i];
                }
            }
        }
        return 0 ;
    }
};
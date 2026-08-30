class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        int minidx ; int maxidx ;
        for (int i = 0 ; i < nums.size() ; i++){
            if (nums[i] < minimum){
                minimum = nums[i];
                minidx = i;
            }
            if (nums[i] > maximum){
                maximum = nums[i];
                maxidx = i;
            }
        }
        int left = min(maxidx , minidx) ;
        int right = max(maxidx , minidx);
        int between = right - left;
        left ++ ;
        right = -1*(right - nums.size());
        
        int result = min (left + right , left + between);
        result = min(result ,  right + between);
        return result ;
    }    
};
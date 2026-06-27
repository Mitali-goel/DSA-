class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int r = 0 ; int l = 0 ; int m = 0 ; 
        int max_one = 0 ; 
        while( r < nums.size() && (m < k  ||  nums[r] == 1)) {
            if (nums[r] == 0){
                m++;
            }
            max_one = max(max_one , r-l+1);
            r++;
        }

        while(r < nums.size()){
            if (nums[r] == 0){
                while (m==k){
                    if (nums[l] ==0){
                    m--;
                    }
                    l++;
                }
                m++;
            }
            
            max_one = max(max_one , r-l+1);
            r++;
        }
        return max_one ; 
    }
};
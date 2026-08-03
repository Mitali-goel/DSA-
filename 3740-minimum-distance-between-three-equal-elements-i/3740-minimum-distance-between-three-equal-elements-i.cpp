class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int , int>mpp ; 
        for(int i = 0 ; i < nums.size() ; i++){
            mpp[nums[i]]++ ; 
        }
        int l = 0 ; int r = 0 ; int result = INT_MAX ; 
        while (r<nums.size()){
            if (mpp[nums[l]] >= 3){
                int middle = l+1 ; 
                while(nums[middle] != nums[l]){
                    middle++ ;
                }
                r = middle + 1 ;
                while (nums[r] != nums[l]){
                    r++ ;
                }
                result = min( result , 2*(r-l));
                mpp[nums[l]]-- ; 
                l++ ; 
                r = l ;
                middle = 0 ; 
                
            }else{
                l++ ; 
                r++ ; 
            }
        }
        if (result == INT_MAX){  return -1 ; }
      return result ;   
    }
};
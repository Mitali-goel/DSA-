class Solution {
public:
    int minimumDistance(vector<int>& nums) {

// tc = O(n3)  SC = O(1)

        // int ans = INT_MAX ;
        // int n = nums.size(); 
        // for (int i = 0 ; i < n - 2 ; i++){
        //     for (int j = i+1 ; j < n -1 ; j++){
        //         if (nums[i] != nums[j]){
        //             continue ;
        //         }
        //         for(int k = j+1  ; k < n ; k++){
        //             if (nums[i] == nums[k]){
        //                 ans = min(ans , 2*(k-i));
        //             }
        //         } 
        //     }
        // }
        // if (ans == INT_MAX) return -1 ;
        // return ans ; 







// TC = O(n2)        SC = O(n)
 

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
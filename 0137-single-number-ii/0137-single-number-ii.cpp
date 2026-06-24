class Solution {
public:
    int singleNumber(vector<int>& nums) {

// brutte force tc = O(n2) sc = O(1)       

        // for (int i = 0 ; i < nums.size() ; i++){
        //     int n = 0 ; 
        //     for (int j = 0 ; j < nums.size() ; j++){
        //         if(nums[i] == nums[j]) n++;
        //     }
        //     if (n ==1 )
        //     return nums[i];
        // }
        // return 0 ;



// second solution tc 
  int ans = 0 ; 
   for (int j = 0 ; j < 32 ; j++){  
    int count = 0 ; 
     for (int i = 0 ; i < nums.size() ; i++ ){
         if (nums[i] & (1<<j)) {
            count ++; 
        }
     }
         if (count % 3 == 1){
           ans =  ans | (1<<j);
        }
   }
   return ans ;    



// third solution   tc = O(nlogn) + O(n/3)  ; sc = O(1)
  // sorting the array and then traversing evry middle node of three consecutive number 

    sort(nums.begin() , nums.end());
     int n =  nums.size() ;
    for (int i = 1 ; i <n ; i= i+3){
        if (nums[i] != nums[i-1]){
            return nums[i-1];
        }
    }
 
    return nums[n-1];





    }
};
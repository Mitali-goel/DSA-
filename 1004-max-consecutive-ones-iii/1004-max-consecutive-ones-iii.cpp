class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

// // brutte force TC = O(N2)         SC =O(1)  

//     int zeros = 0 ; int max_ones = 0 ;
//         for (int i = 0 ; i < nums.size() ; i++){
//             zeros = 0 ;
//             for(int j = i ; j < nums.size()  ; j++){
//                 if(zeros < k || nums[j] == 1){
//                    if (nums[j] == 0) {
//                     zeros ++ ;
//                 }
//                 max_ones = max (max_ones , j-i+1); 
//                 }
//                 else {
//                     break ; 
//                 }  
//         }
//     }
//         return max_ones ; 



// brutte force
// using while loop
// TC = O(N2)         SC =O(1)  


    //   int max_ones = 0 ;  int zeroes = 0; 
    //     for (int i = 0 ; i < nums.size() ; i++){
    //         zeroes = 0 ; int j = i;
    //         while ((j < nums.size())&& (zeroes < k || nums[j] == 1) ){
    //             if(nums[j] == 0){
    //                 zeroes ++ ; 
    //             }   
    //             max_ones = max (max_ones ,  j-i+1);
    //             j++;
    //             }
    //     }
    //     return max_ones;






// optimal Solution 
// TC = O(N)   SC = O(1)



        int r = 0 ; int l = 0 ; int m = 0 ; 
        int max_one = 0 ; 

//   this double commented part can also be removed but for mr it makes solution clear 


        // while( r < nums.size() && (m < k  ||  nums[r] == 1)) {
        //     if (nums[r] == 0){
        //         m++;
        //     }
        //     max_one = max(max_one , r-l+1);
        //     r++;
        // }




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
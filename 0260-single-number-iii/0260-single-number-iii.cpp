class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {


// // first solution  tc = O(N2)   ;  sc= O(1)
//   vector<int> result;
//     for (int i = 0 ; i < nums.size() ; i++){
//         int count = 0 ; 
//         for (int j = 0 ; j < nums.size() ; j++){
//             if (nums[i] == nums[j]){
//                 count++; 
//             }
//         }
//         if (count == 1){
//             result.push_back(nums[i]);
//         }
//     }        
//          return result ;



//  BUCKET METHOD     TC = O(N)  ; SC = O(1)


    int XOR = 0 ; 

    for(int i = 0 ; i < nums.size() ; i++){
        XOR = XOR ^ nums[i];
    }

// to find rightmost set bit (the index where both no hv diff bit)
    // XOR = (XOR & (XOR - 1)) ^ XOR ;
  long long mask = (long long)XOR & -(long long)XOR;
XOR = (int)mask;



    int buc1 = 0 ; // storing all the set bit at same index of XOR
    int buc2 = 0 ; // storing all the unset bit at same index of XOR

    for (int i = 0 ; i < nums.size() ; i++){
        if (nums[i] & XOR){
            buc1 = buc1 ^ nums[i];
        }else {
            buc2 = buc2 ^ nums[i];
        }
    }
     
    return {buc1 , buc2};

    }
};
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {

// BRUTTE FORCE           TC = O(n3)(time limit exceeeds)       

//         map<int , int> mpp ;  
//         int count = 0; 
//         for (int i = 0 ; i < nums.size() ; i++){
//             for (int j = i ; j < nums.size() ; j++){
//                 for (int k = j; k < nums.size() ; k++){
//                     int XOR = nums[i] ^ nums[j] ^ nums[k];
//                     if (mpp[XOR]==0) count ++;
//                     mpp[XOR] ++;

//                 }
//             }
//         }
//     return count;




// optimal solution          TC = O(long n)
// intution behind is xor values does not depenf on index just the no. of bits 

    int n = nums.size();

    if (n <= 2)  return nums.size();

    int count = 0 ; int p = 1;
    while (n != 0){
        n = n >> 1;
        count ++;
        p = p <<1;
    }
    return p ;
    }
};
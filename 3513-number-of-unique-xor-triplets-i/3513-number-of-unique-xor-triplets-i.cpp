class Solution {
public:


    long long power(long long a  , long long b ){
        if (b == 0){
            return 1 ;
        }
        long long ans = 1 ;
        while(b!=0){
            if (b % 2 != 0){
                ans  = ans * a; 
            }
            a = a*a ;
            b = b/2;
        }

        return ans ;
    }



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

    int n = nums.size();

    if (n <= 2)  return nums.size();

    int count = 0 ; int p = 1;
    while (n != 0){
        n = n >> 1;
        count ++;
        p = p <<1;
    }

    // int p = power (2 , count);
    return p ;
    }
};
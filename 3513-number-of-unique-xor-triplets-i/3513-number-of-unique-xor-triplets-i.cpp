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

    //     map<int , int> mpp ;  
    //     for(int i = 0 ; i < nums.size() ; i++){
    //         mpp[nums[i]]++;
    //     }
        
    //     int count = nums.size() ; 
    //     for (int i = 0 ; i < nums.size() ; i++){
    //         for (int j = i+1 ; j < nums.size() ; j++){
    //             for (int k = j+1 ; k < nums.size() ; k++){
    //                 int XOR = nums[i] ^ nums[j] ^ nums[k];
    //                 if (mpp[XOR]==0) count ++;
    //                 mpp[XOR] ++;

    //             }
    //         }
    //     }
    // return count;


    int n = nums.size();

    if (n <= 2)  return nums.size();

    int count = 0 ;
    while (n != 0){
        n = n >> 1;
        count ++;
    }

    int p = power (2 , count);
    return p ;






        // int n = nums.size();
        // int result = n;
        // if (n > 2) {
        //     int comb = 1  ; 
        //     for (int i = n ; i > n-3 ; i--){
        //         comb *= i ;  
        //     }
        //     comb /= 6 ;
        //     result += comb ;
        // }

        // return result ; 
    }
};
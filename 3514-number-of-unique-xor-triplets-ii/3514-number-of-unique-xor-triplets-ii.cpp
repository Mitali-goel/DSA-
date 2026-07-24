class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        // map<int,int> mpp; int count = 0 ; 
        // for (int i = 0 ; i < nums.size () ; i++){
        //     for (int j = i ; j < nums.size() ; j ++){
        //         for (int k = j ; k < nums.size() ; k++){
        //             int XOR = nums[i] ^ nums[j] ^ nums[k];
        //             if (mpp[XOR] == 0){
        //                 count++;
        //             }
        //             mpp[XOR] ++;
        //         }
        //     }
        // }
        // return count ;





        vector<bool>pairs(2048 ,  false);
        vector<bool>triplets(2048 , false);
        int count = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i ; j < nums.size() ; j++){
                pairs[nums[i] ^ nums[j]] = true ; 
            }
        }

        for (int i = 0 ; i < pairs.size() ;i++){
            for(int j = 0 ; j < nums.size() ; j++){
                if (pairs[i]){
                    triplets[i ^ nums[j]] = true ; 
                }
            }
        }
        for (int i = 0 ; i < triplets.size() ;i++){
            if (triplets[i]){
                count++;
            }
        }
        return count ;
    }
};
class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {

// TIME LIMIT EXCEEDS //
        // long long count = 0 ; 
        // for(int i = 0 ; i < prices.size() - 1 ; i++){
        //     count += 1 ; 
        //     for(int j = i+1 ; j< prices.size(); j++){
        //         if (prices[j-1] - 1 == prices[j]){
        //             count++ ; 
        //         }else{
        //             break ; 
        //         }
        //     }
        // }
        // return count+1 ; 




        long long count = 0 ; 
        long long idx = 1 ; 
        for(int i = 1 ; i < prices.size() ; i++){
            if (prices[i-1] - 1 == prices[i]){
                idx++ ; 
            }else{
                count += idx * (idx+1) / 2;
                idx = 1 ;
            }
        }
        count += (idx+1) * idx / 2;
        return count; 
    }
};
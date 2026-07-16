class Solution {
public:
    long long gcdSum(vector<int>& nums) {

        vector<int> prefixGcd ; 
        int m = INT_MIN ; 
        for (int i = 0 ; i < nums.size() ; i++){
            m = max(m , nums[i]);
            // int gcd = 1 ;
            // for (int j = nums[i] ; j >= 2 ; j--){
            //     if (m % j == 0 && nums[i] % j == 0){
            //         gcd = j ;
            //         break ;
            //     }
            // }
            prefixGcd.push_back(gcd(m, nums[i]));
        }
        sort(prefixGcd.begin() , prefixGcd.end());
        long long sum = 0; 
        int low = 0 ; int high = prefixGcd.size()-1;
        while(low < high){
            // int gcd = 1 ; 
            // for(int i = prefixGcd[low] ; i >=2 ; i--){
            //     if (prefixGcd[low] % i == 0 && prefixGcd[high] % i == 0 ){
            //         gcd = i ; 
            //         break ;
            //     }
            // }
            sum += gcd(prefixGcd[low], prefixGcd[high]); 
            low++ ; 
            high--;
        }
    return sum ;
    }
};
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxEl = INT_MIN ; 
        int minEl = INT_MAX ; 
        for(int i = 0; i < nums.size() ; i++){
            maxEl = max(maxEl , nums[i]);
            minEl = min(minEl , nums[i]);
        }
        int ans = 1 ; 
        for(int i = 2 ; i <= maxEl ; i++){
            if (maxEl % i == 0 && minEl %i == 0){
                ans = i ; 
            }
        }
        return ans ; 
    }
};
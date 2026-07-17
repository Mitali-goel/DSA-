class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        // vector<int> result;
        // vector<int>gcdPairs ;
        // for (int i = 0 ; i < nums.size(); i++){
        //     for (int j = i+1 ; j < nums.size() ; j++){
        //         int k = gcd(nums[i] , nums[j]);
        //         gcdPairs.push_back(k);
        //     }
        // }
        // sort(gcdPairs.begin() , gcdPairs.end());

        // for (int i = 0 ; i < queries.size() ; i++){
        //     int m = gcdPairs[queries[i]];
        //     result.push_back(m);
        // }
        // return result ;




        vector<int>result ;

        int mx = *max_element(nums.begin() , nums.end());

        vector<int>freq (mx+1 , 0) ;
        for (int i = 0 ; i < nums.size() ; i++){
            freq[nums[i]]++;
        }
        vector<long long>count(mx+1 , 0) ;
        for (int i = 1 ; i <= mx ; i ++){
            for (int multiple = i ; multiple <= mx ; multiple += i){
                count[i] += freq[multiple];
            }
        }
        for(int i = 0 ; i < count.size() ; i++){
            count[i] = count[i] * (count[i] - 1) / 2 ;
        }
        vector <long long> exact = count ; 
        for (int i = mx ; i >= 1 ; i--){
            for (int multiple = 2*i ; multiple <= mx ; multiple += i){
                exact[i] = exact[i] - exact[multiple];
            }
        }
        vector<long long> prefix (exact.size(), 0);
        for (int i = 1 ; i < exact.size() ; i++){
            prefix[i] = prefix[i-1] + exact[i];
        }
        for (int i = 0 ; i < queries.size() ; i++){
            int k = lower_bound(prefix.begin()+1 , prefix.end() , queries[i]+1)- prefix.begin();
            result.push_back(k);
        }
        return result ;
    }
};
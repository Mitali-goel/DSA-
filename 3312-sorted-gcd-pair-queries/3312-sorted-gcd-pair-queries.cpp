class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {

// zBRUTTE FORCE APPROACH             TC = O(N2) (TLE)        
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


//  OPTIMAL APPROACH 

// INTUTION 

// firstly find maximum element in nums                                                                    TC = O(n)               SC = O(1)
// then form a frequency vector (m is max el)                                                              TC = O(m)+O(n)          SC = O(m)
// then form a count vector which stores count of nos divisible by i is count[i]                           TC = O(mlogm)           SC = O(m)
// the form combinations (pair of two nos.)                                                                TC = O(m)               SC = O(1) 
// then form a vector exact storing exact no of pairs having gdc as i is exact[i]                          TC = O(mlogn)           SC = O(m) 
// form a prefix vector                                                                                    TC = O(m)               SC = O(m)
// then applying lower bound of binary search
//  (as queries arr is a 0 based index arry and prefix id 1 based) => so searching for queries[i] +1       TC = O(qlogm)            SC = O(q)

// Time complexity = O(N) + O(m logm )+ O(qlogm)                   Space complexity = O(4m + q)

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
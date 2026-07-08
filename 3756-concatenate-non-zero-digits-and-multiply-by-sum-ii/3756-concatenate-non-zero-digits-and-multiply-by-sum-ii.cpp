// class Solution {
// public:
//     vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        
        // vector<int> answer ;
        // for (int i = 0 ; i < queries.size() ; i++){
        //  string x = ""; int digit = 0; int sum = 0 ;  long long num = 0 ; 
        //     for(int j = queries[i][0] ; j <= queries[i][1] ;  j++){
        //        if (s[j] != '0'){
        //         digit = s[j] - '0';
        //         num = (num * 10 + digit ) % 1000000007;
        //         sum += s[j] -'0';
        //        }
        //     } 
        //     long long result = num * sum % 1000000007;
        //     answer.push_back((int)result);
        // }
        // return answer ;


        // int q = queries.size() ;    int S = s.size();  
        // vector<int>prefixSum(S+1 , 0);
        // vector<int>arr ; 
        // vector<int> position ; 

        // for(int i = 0 ; i < S ; i++){
        //     prefixSum[i+1] = prefixSum[i] + (s[i] -'0');
        //    if (s[i] != '0'){
        //     arr.push_back(s[i] -'0');
        //     position.push_back(i);
        //    }
        // }
        //     vector<int> answer ;
        //     int sum = 0 ;  long long num = 0 ; 
        // for (int i = 0 ; i < q ; i++){
        //     long long num = 0 ; 
        //     sum = prefixSum[queries[i][1] + 1] - prefixSum[queries[i][0]];

        //    lower_bound()

        //     for (int k = l ; k <= r ; k++){
        //         num = (num*10 + arr[k]) % 1000000007 ;
        //     }

        //     num = num * sum  % 1000000007 ;

        //     answer.push_back((int)num);

        // }
        // return answer ; 





        class Solution {
public:
    static const int MOD = 1e9 + 7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size();

        // Prefix sum of digits
        vector<long long> prefixSum(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + (s[i] - '0');
        }

        // Store non-zero digits and their original positions
        vector<int> digits;
        vector<int> pos;

        for (int i = 0; i < n; i++) {
            if (s[i] != '0') {
                digits.push_back(s[i] - '0');
                pos.push_back(i);
            }
        }

        int m = digits.size();

        // Powers of 10
        vector<long long> pow10(m + 1, 1);
        for (int i = 1; i <= m; i++) {
            pow10[i] = (pow10[i - 1] * 10) % MOD;
        }

        // Prefix value:
        // pref[i] = number formed by first i non-zero digits
        vector<long long> pref(m + 1, 0);

        for (int i = 0; i < m; i++) {
            pref[i + 1] = (pref[i] * 10 + digits[i]) % MOD;
        }

        vector<int> ans;

        for (auto &q : queries) {

            int l = q[0];
            int r = q[1];

            long long sum = prefixSum[r + 1] - prefixSum[l];

            // first non-zero digit >= l
            int L = lower_bound(pos.begin(), pos.end(), l) - pos.begin();

            // first position > r
            int R = upper_bound(pos.begin(), pos.end(), r) - pos.begin();

            if (L == R) {
                ans.push_back(0);
                continue;
            }

            int len = R - L;

            // Extract the required concatenated number
            long long num =
                (pref[R] - (pref[L] * pow10[len]) % MOD + MOD) % MOD;

            ans.push_back((num * sum) % MOD);
        }

        return ans;
    }
};

//     }
// }; 
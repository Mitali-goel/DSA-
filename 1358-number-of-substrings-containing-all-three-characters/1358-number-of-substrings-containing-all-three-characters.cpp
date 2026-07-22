class Solution {
public:
    int numberOfSubstrings(string s) {
// two different methods but same approach and same time comlplexity 
// tc = O(n)

        int n = s.size();
        int count = 0 ; 
        vector<int> mpp (3,0);
        int l = 0 ; int r = 0 ;
        while(r<s.size()){
            mpp[s[r] - 'a'] ++;
            while(mpp[0] > 0 && mpp[1]  > 0 && mpp[2]  > 0){
                count += (n - r);
                mpp[s[l] - 'a']--;
                l++;
            }
            r++;
        }
        return count ;






        // int count = 0 ; 
        // vector<int> arr (3, -1);
        // int l = 0 ; int r = 0 ; 
        // while(r < s.size()){
        //     arr[s[r] - 'a'] = r ; 
        //     if (arr[0] + arr[1] + arr[2] > 0){
        //         int mini1 = min (arr[0] , arr[1]);
        //         int mini = min (mini1 , arr[2]);
        //         count += mini +1 ;
        //     }
        //     r++;
        // }
        // return count;
    }
};
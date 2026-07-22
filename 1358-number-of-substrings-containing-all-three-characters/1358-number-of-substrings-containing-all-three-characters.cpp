class Solution {
public:
    int numberOfSubstrings(string s) {
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
    }
};
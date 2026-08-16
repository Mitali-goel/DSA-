class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<int , int> mpp ; int count = 0 ;
        int l = 0 ; int r = 0 ; 
        while(r < s.size()){
            if (mpp[s[r]] < 2){
                mpp[s[r]]++;
            }else{
                while (s[r] != s[l]){
                    mpp[s[l]] -- ;
                    l++;
                }
                l++;
            }
            count = max (count , r-l+1 );
            r++;
        }
        return count ;
    }
};
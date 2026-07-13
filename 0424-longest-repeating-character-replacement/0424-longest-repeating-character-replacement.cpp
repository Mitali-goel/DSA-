class Solution {
public:
    int characterReplacement(string s, int k) {
    
    // int l = 0 ; int r = 0 ; 
    // map <char , int> mpp ; 
    // int total = 0 ; int maxel = 0;
    // int maxlen = 0 ; 
    // while (r < s.size()){ 
    //     mpp[s[r]] ++ ; 
    //     total = 0; 
    //     maxel = 0 ; 

    //     for(auto it : mpp){
    //         total += it.second;
    //         maxel = max (maxel , it.second);
    //     }
    //     if (total - maxel > k){
    //         mpp[s[l]] -- ; 
    //         if (mpp[s[l]] == 0){
    //             mpp.erase(s[l]);
    //         }
    //         l++ ; 
    //     }   
    //     maxlen = max(maxlen , r-l+1);
    //     r++;
    // }
    // return maxlen ; 





    int l = 0 ; int r = 0 ; 
    int maxFreq = 0 ; int maxlen = 0 ;
    vector<int> mpp (26, 0);
    while (r < s.size()){
        mpp[s[r] - 'A']++;

        maxFreq = max(maxFreq ,mpp[s[r] - 'A'] );

        if ((r-l+1)- maxFreq > k){
            mpp[s[l] - 'A']--;
            l++;
        }
        maxlen = max(maxlen , r-l+1);
        r++;
    }
    return maxlen;






    }
};
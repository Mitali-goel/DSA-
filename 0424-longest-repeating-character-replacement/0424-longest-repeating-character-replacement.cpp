class Solution {
public:
    int characterReplacement(string s, int k) {
        // int maxlen = 0 ; 
        // for (int i = 0 ; i < s.size() ; i++){
        //     int change = 0 ;
        //     for (int j = i ; j < s.size() ; j++){
        //         if(s[j] != s[i]){
        //             if(change == k)
        //             break ;
        //             else {
        //                 change++ ;
        //             }
        //         }
        //         maxlen = max (maxlen,j-i+1);
        //     }
        // }
        // return maxlen ; 




    int l = 0 ; int r = 0 ; 
    map <char , int> mpp ; 
    int total = 0 ; int maxel = 0;
    int maxlen = 0 ; 
    while (r < s.size()){ 
        mpp[s[r]] ++ ; 
        total = 0; 
        maxel = 0 ; 

        for(auto it : mpp){
            total += it.second;
            maxel = max (maxel , it.second);
        }
        if (total - maxel > k){
            mpp[s[l]] -- ; 
            if (mpp[s[l]] == 0){
                mpp.erase(s[l]);
            }
            l++ ; 
        }   
        maxlen = max(maxlen , r-l+1);
        r++;
    }
    return maxlen ; 





    }
};
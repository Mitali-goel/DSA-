class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
//brutte force TC = O(n2)    SC = O(256)   
    // int max_len = 0 ; 
    //  for(int i = 0 ; i < s.size() ; i++){
    //     int hash[256] = {0}; 
    //     for(int j = i ; j < s.size() ; j++){
    //         if(hash[s[j]] == 1){
    //          break ; 
    //         }
    //         hash[s[j]] ++;
    //          max_len = max(max_len , j-i+1); 
    //     }
    //  }
    // return  max_len ; 


// better approach  
// TC = O(2n)     SC = O(256)

    // int l = 0 ; 
    // int r = 0 ; 
    // int max_len = 0 ; 
    // int hash[256] = {0};
    // for (r = 0 ; r < s.size() ; r++){
    //     if ( hash[s[r]] == 1) {
    //        while (s[r] != s[l]){
    //         hash[s[l]] -- ; 
    //         l++;
    //        }
    //        l++;
    //     }else{
    //         hash[s[r]] ++;
    //     }
    //     max_len = max (max_len , r-l+1);
    // }
    // return max_len ; 



// the intution of optimal solution is just like we will not keep 1 when we see any character we will store its index which reduces its timecomplexity from O(2N) to O(N)

// optimized approach     TC = O(n)   SC = O(1)
    int l = 0 ; 
    int r = 0 ; 
    int max_len = 0 ; 
    int hash[256]  ;
    memset(hash, -1, sizeof(hash));
    for (r = 0 ; r < s.size() ; r++){
        if (hash[s[r]] != -1 && hash[s[r]] >= l) { 
          l = hash[s[r]] + 1;
        }
        hash[s[r]]  = r ;
        max_len = max (max_len , r-l+1);
    }
    return max_len ; 

    }
};

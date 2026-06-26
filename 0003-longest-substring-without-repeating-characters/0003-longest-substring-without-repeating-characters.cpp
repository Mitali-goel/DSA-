class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
//brutte force TC = O(n2)    SC = O(256)   
    int max_len = 0 ; 
     for(int i = 0 ; i < s.size() ; i++){
        int hash[256] = {0}; 
        for(int j = i ; j < s.size() ; j++){
            if(hash[s[j]] == 1){
            max_len = max(max_len , j-i); 
            break ; 
            }
            hash[s[j]] ++;
             max_len = max(max_len , j-i+1); 
        }
     }
    return  max_len ; 
    }
};

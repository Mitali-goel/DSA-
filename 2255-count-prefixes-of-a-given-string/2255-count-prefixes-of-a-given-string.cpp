class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        vector<string> prefix (s.size() ) ;
        prefix[0] = s[0];
        for (int i = 1 ; i < s.size() ; i++){
            prefix[i]  = prefix[i-1] + s[i];
        }
        int count = 0 ;
        for (int i = 0 ; i < words.size() ; i++){
            for(int j = 0 ; j < prefix.size() ; j++){
                if (words[i] == prefix[j]){
                    count ++ ;
                }
            }
        }
        return count ;
    }
};
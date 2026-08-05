class Solution {
public:
    int firstUniqChar(string s) {
        map<int , int> mpp ;
        for(int i = 0 ; i < s.size() ; i++){
            mpp[s[i] - 'a']++ ; 
        }
        for(int i = 0 ; i < s.size() ; i++){
            if(mpp[s[i] - 'a'] == 1){
                return i ; 
            }
        }
        return -1 ; 
    }
};
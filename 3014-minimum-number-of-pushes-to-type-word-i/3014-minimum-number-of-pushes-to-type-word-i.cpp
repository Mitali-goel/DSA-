class Solution {
public:
    int minimumPushes(string word) {
        int count = 0 ; int add = 1 ; 
        for (int i = 0 ; i < word.size() ; i++){
            add = (i/8)+ 1 ;
            count += add ; 
        }
        return count ; 
    }
};
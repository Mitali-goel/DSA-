class Solution {
public:
    int minimumPushes(string word) {
        // int count = 0 ; int add = 1 ; 
        // for (int i = 0 ; i < word.size() ; i++){
        //     add = (i/8)+ 1 ;
        //     count += add ; 
        // }
        // return count ; 


        int n = word.size();
        int count = 0 ; 
        int i = 1  ;
        while(n > 0){ 
            if (n >= 8)     count += i * 8 ;
            else            count += i * n ;
            n = n-8 ;
            i++ ; 
        }
        return count ; 
    }
};
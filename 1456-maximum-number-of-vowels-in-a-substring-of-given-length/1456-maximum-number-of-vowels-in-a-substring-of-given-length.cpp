class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0 ;
        for (int i = 0 ; i < k  ; i++){
            if (s[i] == 'a'  ||
                 s[i] == 'e' ||
                 s[i] == 'i' ||
                 s[i] == 'o' ||
                 s[i] == 'u' ){
                    count++;
                 }
        }
        int maxVowels = count ;
        int l = 0 ; int r = k ; 
        while (r < s.size()){
            if((s[l] != 'a'  &&
                 s[l] != 'e' &&
                 s[l] != 'i' &&
                 s[l] != 'o' &&
                 s[l] != 'u' )&&
                 (s[r] == 'a'||
                 s[r] == 'e' ||
                 s[r] == 'i' ||
                 s[r] == 'o' ||
                 s[r] == 'u' )){
                    count ++ ; 
                 }else if ((
                 s[l] == 'a' ||
                 s[l] == 'e' ||
                 s[l] == 'i' ||
                 s[l] == 'o' ||
                 s[l] == 'u' )&&
                 (s[r] != 'a'&&
                 s[r] != 'e' &&
                 s[r] != 'i' &&
                 s[r] != 'o' &&
                 s[r] != 'u' )){
                    count --; 
                 }
                 l++ ; 
                 r++ ; 
                 maxVowels = max (count , maxVowels);
        }
    return maxVowels ; 
    }
};
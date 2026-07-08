class Solution {
public:
    string reverseVowels(string s) {
        string str = " ";
        for (int i = 0 ; i < s.size() ; i++){
            if (s[i] == 'a'||
                s[i] == 'e'||
                s[i] == 'i'||
                s[i] == 'o'||
                s[i] == 'u'||
                s[i] == 'A'||
                s[i] == 'E'||
                s[i] == 'I'||
                s[i] == 'O'||
                s[i] == 'U' ){
                    str.push_back(s[i]);
                }
        }

        reverse(str.begin() , str.end());
        int l = 0 ; 

         for (int i = 0 ; i < s.size() ; i++){
            if (s[i] == 'a'||
                s[i] == 'e'||
                s[i] == 'i'||
                s[i] == 'o'||
                s[i] == 'u'||
                s[i] == 'A'||
                s[i] == 'E'||
                s[i] == 'I'||
                s[i] == 'O'||
                s[i] == 'U' ){
                   s[i] = str[l++];
                }
        }
        return s;
    }
};
class Solution {
public:
    string smallestPalindrome(string s) {

        vector<int>count(26 , 0) ; 
        for(int i = 0 ; i<s.size() ; i++){
            count[(s[i] - 'a')] ++;
        }
        string result = "";
        string middle  = "";
        for(int i = 0 ; i < count.size() ; i++){
            if (count[i] != 0){
                for(int j = 0 ; j < (count[i])/2  ; j++){
                    result.push_back(i+'a');
                }
            }

            if (count[i] % 2 != 0){
                middle.push_back(i+'a');
            }
        }
        string str = result ; 
        reverse(result.begin() , result.end());
        str = str + middle + result ; 
        return str ;
    }
};
class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>arr(26,0) ; 
        for (int i = 0 ; i < t.size() ; i++){
            arr[t[i] - 'a']++;
        }
        for (int i = 0 ; i < s.size(); i++){
            arr[s[i] - 'a']--;
        }
        for (int i = 0 ; i < arr.size() ; i++){
            if (arr[i]==1){
                return i+'a';
            }
        }
        return '0';
    }
};
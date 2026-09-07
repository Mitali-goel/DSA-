class Solution {
public:
    int countRotations(string s, int k) {
        vector< string > prefix(s.size()) ;
        int count = 0 ; 
        prefix[0] = string(1, s[0]);
        for(int i = 1 ; i < s.size() ; i++){
            prefix[i] = prefix[i-1] + s[i];
        }
        for(int i = 0 ; i < s.size() ; i++){
            string str = s + prefix[i];
            int cnt = 0;
            for(int j = i+1 ; j < str.size() - 1 ; j++){
                if(str[j] == str[j+1]){
                    cnt++;
                }
            }
            if (cnt == k){
                count ++;
            }
        }
        return count ; 
    }
};
class Solution {
public:
    int minimumPushes(string word) {
        vector<int>count(26 , 0);
        for (int i = 0 ; i < word.size() ; i++){
            count[word[i] - 'a']++;
        }

        int n = 0;
        for(int i = 0 ; i <count.size() ; i++){
            if (count[i] != 0){
                n++;
            }
        }

        if (n <= 8){
            return word.size();
        }
        sort(count.begin() , count.end() , greater<int>());

        int cnt = 0 ; 
        int add = 1 ; 
        for(int i = 0 ; i < n ; i++){
            add = i / 8 + 1 ; 
            cnt = cnt + count[i] * add ;
        }
        return cnt ; 
    }
};
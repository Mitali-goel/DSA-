class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {

        int count = 0 ;
// in this sol we are goining through each substring of word and is checkinh if this substring exists in patterns 

// TC = O(N2 * m)   let m is no. of patterns
 
        // for (int i = 0 ; i < word.size() ; i++){
        //     string s = "";
        //     for(int j = i ; j < word.size() ; j++){
        //         s += word[j];
        //         int k = 0 ;
        //         while(k < patterns.size()){
        //             if (patterns[k] == s){
        //                 count++;
        //                 patterns.erase(patterns.begin() + k);
        //             }else{
        //                 k++;
        //             }
        //         }
        //     }
        // }


// in this we go to each pattern[i] if that exist in word of not 
// TC = O(n * m)    m is no of patterns

        for(int i = 0 ; i < patterns.size() ; i++){
            if (word.find(patterns[i]) != string::npos){
                count++;
            }
        }
        return count ; 
    }
};
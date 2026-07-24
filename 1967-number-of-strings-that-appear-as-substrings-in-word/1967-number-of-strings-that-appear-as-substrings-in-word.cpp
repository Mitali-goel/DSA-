class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {

        int count = 0 ;


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




    for(int i = 0 ; i < patterns.size() ; i++){
        if (word.find(patterns[i]) != string::npos){
            count++;
        }
    }



        return count ; 
    }
};
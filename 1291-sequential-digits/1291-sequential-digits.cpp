class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

        string s = "123456789";
        vector<int>result ; 
        for(int i = 0 ; i < s.size() ; i++){
            for (int j = i ; j < s.size() ; j++){
                string str = ""; 
                for (int k = i ; k <= j ; k++){
                    str += s[k];
                }
                if ((stoi(str)>= low) && (stoi(str) <= high)){
                result.push_back(stoi(str));
                }
            }
        }
        sort(result.begin() , result.end()) ;
        return result ;







    //     int l = 0 ; int r = 0 ; vector<int> result ;
    //     string s = "123456789";
    //     while (r < s.size()){
    //         string str = ""; 
    //         for (int i = l ; i <= r ; i++){
    //             str += s[i];
    //         }
    //         if ((stoi(str)>= low) && (stoi(str) <= high)){
    //             result.push_back(stoi(str));
    //             r++ ;
    //         }else if (stoi(str)< low){
    //             r++ ; 
    //         }else{
    //             l++ ; 
    //         } 
    //     }
    //     sort(result.begin() , result.end()) ;
    // return result ;
    }
};
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

// BRUTTE FORCE               TC = O(N3)+ O(nlogn)        

        // string s = "123456789";
        // vector<int>result ; 
        // for(int i = 0 ; i < s.size() ; i++){
        //     for (int j = i ; j < s.size() ; j++){
        //         string str = ""; 
        //         for (int k = i ; k <= j ; k++){
        //             str += s[k];
        //         }
        //         if ((stoi(str)>= low) && (stoi(str) <= high)){
        //         result.push_back(stoi(str));
        //         }
        //     }
        // }
        // sort(result.begin() , result.end()) ;
        // return result ;








// MY OPTIMAL SOLUTION             

    // int lowD = 0 ; int l = low ;
    // int highD = 0 ; int h = high ; 
    // while (l != 0){
    //     l = l/10;
    //     lowD++ ; 
    // }while (h!= 0){
    //     h = h/10;
    //     highD++;
    // }
    // int diff =  highD-lowD;
    // string s = "123456789";
    // vector<int> result ;
    // for (int i = 0 ; i <= diff ; i++){
    //     int left = 0 ; int right = lowD-1 ; 
    //     while(right < s.size()){
    //         string str = "" ; 
    //         for (int j = left ; j <= right ; j++){
    //             str += s[j];
    //         }
    //         if ((stoi(str)>= low) && (stoi(str) <= high)){
    //             result.push_back(stoi(str));
    //         }
 
    //         left++ ;
    //         right++ ;
    //     }
    //     lowD++;
    // }
    // return result ;




// OPTIMIZED SOLUTION 

    string lowstr = to_string(low);
    int lowsize = lowstr.size();
    string highstr = to_string(high);
    int diff = highstr.size() -  lowstr.size() ;
    string s = "123456789";
    vector<int> result ;
    for (int i = 0 ; i <= diff ; i++){
        int l = 0 ; int r = lowsize -1 ; 
        while (r < s.size()){
            string str = s.substr(l , r-l+1);
             if ((stoi(str)>= low) && (stoi(str) <= high)){
                result.push_back(stoi(str));
            }
            l++ ; 
            r++ ; 
        }
        lowsize ++ ; 
    }
    return result ;
    }
};
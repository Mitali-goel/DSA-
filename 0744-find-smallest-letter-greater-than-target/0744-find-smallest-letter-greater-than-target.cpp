class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        if(letters[letters.size()-1] <= target )   return letters[0];
        for(int i = 0 ; i < letters.size() ; i++){
            if (letters[i] > target){
                return letters[i];
            }
        }
        return 0 ;




        // int low = 0;
        // int high = letters.size() - 1;
        // int mid ; 
        // if(letters[high] < target )   return letters[0];

        // while (low <= high){
        //      mid = (low + high) >> 1;

        //     if(letters[mid] == target){
        //         return letters[mid+1];
        //     }
        //     else if(letters[mid] > target){
        //        if (mid != 0) high = mid - 1;
        //        else break ;
        //     }
        //     else if (letters[mid] < target ){
        //         if(mid != letters.size()-1) low = mid + 1 ; 
        //         else break ;
        //     }
        // }
        // return letters[mid] ;
    }
};
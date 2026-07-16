class Solution {
public:
    vector<int> countBits(int n) {

        vector<int>arr ; 

        for(int i = 0 ; i <= n ; i++){
            int num = i ; 
            int count = 0 ;
            while(num != 0){
                num = num & (num-1) ;
                count++;
            }
            arr.push_back(count);
        }
        return arr ;
    }
};
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        // TC = O(k) + O(k) 
        // SC = O(1)
        int lsum = 0 ; int rsum = 0 ; 
        for(int i = 0 ; i < k ; i++){
            lsum += cardPoints[i] ;
        }
        int max_sum = lsum ; 
        int r = cardPoints.size() - 1;
        for(int l = k-1 ;  l >= 0 ; l--){
            lsum = lsum -  cardPoints[l] ;
            rsum = rsum +  cardPoints[r] ;
            r--;
            max_sum = max( max_sum  , lsum +rsum );
        } 
    return max_sum ; 
 
    }
};
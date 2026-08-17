class Solution {
public:
    int maximumGap(string skill, string station) {
        if (skill.size() == 1)  return 0 ;

        vector<int> left ;
        vector<int> right ;
        int j = 0 ; 
        for (int i =  0 ; i < station.size() ; i++){
            if (j == skill.size()){
                break ;
            }
            if (skill[j] == station[i]){
                left.push_back(i);
                j++ ;
            }
        }
        j--;
        for (int i = station.size() - 1 ; i >= 0 ; i--){
            if  (j  < 0){
                break ;
            }
            if (station[i] == skill[j]){
                right.push_back(i);
                j--;
            }
        }
        reverse(right.begin(), right.end());
        int gap = INT_MIN;
        for(int i = 0 ; i < left.size() - 1 ; i++){
            gap = max(gap , right[i+1] - left[i]);
        }
        return gap ;
    }
};
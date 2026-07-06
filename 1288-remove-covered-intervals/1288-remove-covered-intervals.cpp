class Solution {
public:
int removeCoveredIntervals(vector<vector<int>>& intervals) {
//     int count = 0 ; 
// for (int i = 0 ; i < intervals.size(); i++){        
// for (int j = 0 ; j < intervals.size() ; j++){

//     if(i==j){
//        continue; 
//     }

//     if(intervals[i][0] >= intervals[j][0] && intervals[i][1] <= intervals[j][1]){
//         count++ ; 
//         break ; 
//     }
//             }

//         }
//         return intervals.size()-count ;


    int count= 0 ; 
    sort(intervals.begin() , intervals.end(), [](vector<int>&a , vector<int>&b){
        if (a[0] == b[0])
        return a[1] > b[1];
        return a[0] < b[0];
    } );


    int rightMax = INT_MIN;
    
    for(int i = 0 ; i < intervals.size() ; i++){
        if (intervals[i][1] > rightMax)
            rightMax = intervals[i][1];
        else 
            count++ ; 
    }
        return intervals.size() - count ; 

    }
};
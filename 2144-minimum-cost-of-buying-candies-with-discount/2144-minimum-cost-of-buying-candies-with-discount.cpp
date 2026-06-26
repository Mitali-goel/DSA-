class Solution {
public:
    int minimumCost(vector<int>& cost) {

        // tc = O(nlogn) + O(n)
        // sc = O(1)
        int min_cost = 0 ; 
        // sort in decending order
        sort(cost.begin(), cost.end(), greater<int>());
        // add 0, 1, leave 2nd indx el .....
        for (int i = 0 ; i< cost.size(); i++){
            if ((i+1) % 3 != 0){
                min_cost += cost[i];
            }
        }
        return min_cost ; 
    }
};
class Solution {
public:

vector<vector<int>> cs(vector<int>& candidates,int target, vector<vector<int>>& arr , vector<int>& s,int index ){

    if (index >= candidates.size()){
        if (target == 0){
            arr.push_back(s);
            return arr;
        }else {
            return arr ;
        }
    }

    if (target < 0){
        return arr;
    }

    s.push_back(candidates[index]);
    cs(candidates , target - candidates[index] , arr , s , index);

    s.pop_back();
    cs(candidates , target , arr , s , index+1);
    
    return arr;
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

    vector<vector<int>> arr;
    vector<int>s;
    return cs(candidates , target , arr , s , 0);

    }
};
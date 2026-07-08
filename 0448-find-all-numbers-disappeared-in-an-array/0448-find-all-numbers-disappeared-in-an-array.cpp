class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

// HASH TABLE  TC = O(n)    SC = O(n)        

    vector <int> hash(nums.size() , 0);
    for (int i = 0 ; i< nums.size() ; i++){
        hash[nums[i] -1]++;
    }

    vector<int> missing ; 
    for(int i = 0 ; i < nums.size() ; i++){
        if(hash[i] == 0){
           missing.push_back(i+1);
        }
    }

        return missing ;
     }
};
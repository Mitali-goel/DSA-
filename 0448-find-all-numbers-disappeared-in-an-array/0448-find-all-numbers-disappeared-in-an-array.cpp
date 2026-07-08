class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    //     vector<int>result ;
    //     for (int j = 1 ; j <= nums.size() ; j++){
    //     int count = 0 ;
    //    for (int i = 0 ; i < nums.size() ; i++){
    //     if (j == nums[i]){
    //         count++;
    //     }
    //    } if (count == 0){
        
    //     result.push_back(j);
    //    }
    //    }
    //    return result ;

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
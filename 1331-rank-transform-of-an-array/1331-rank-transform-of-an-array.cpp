class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp = arr ;
        // vector <int> result (arr.size() , 0);
        sort(temp.begin() , temp.end());
        int rank = 1;
        map <int,int> mpp;
        for (int i = 0 ; i< temp.size() ;i++){
            if (i >0 && temp[i-1] == temp[i])
            continue  ;
            mpp[temp[i]] = rank++ ; 
        }

        for (int i = 0 ; i < arr.size() ; i++){
            arr[i] = mpp[arr[i]];
        }
        return arr ; 
    }
};
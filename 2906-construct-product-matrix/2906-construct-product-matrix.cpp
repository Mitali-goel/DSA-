class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        // vector<vector<int>> p = grid;
        // long long product = 1;
        // for (int i = 0; i < grid.size(); i++) {
        //     for (int j = 0; j < grid[i].size(); j++) {
        //         product *= grid[i][j];
        //     }
        // }

        // for (int i = 0; i < p.size(); i++) {
        //     for (int j = 0; j < p[i].size(); j++) {
        //         p[i][j] = (product / grid[i][j]) % 12345;
        //     }
        // }
        // return p;








        
        vector<int> input  ;  
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[i].size() ; j++){
                input.push_back(grid[i][j]);
            }
        }
        vector<long long> prefix (input.size() , 1) ; 
        vector<long long> suffix (input.size() , 1) ;
        for(int i = 1 ; i < input.size() ; i++){
            prefix[i] = prefix[i-1] * input[i-1] % 12345;
        }
        for(int i = input.size()-2 ; i >=0 ; i--){
            suffix[i] = suffix[i+1] * input[i+1] % 12345;
        }

        vector<vector<int>>p = grid ;
        for(int i = 0 ; i < input.size() ; i++){
            p[i/grid[0].size()][i% grid[0].size()] = prefix[i]*suffix[i] % 12345;
        }
        return p ; 
    }
};
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

       vector<vector<int>> gridk = grid ;
        while (k != 0){
           grid = gridk ;
            for (int i = 0 ; i < grid.size() ; i++){
                for(int j = 0 ; j < grid[i].size() ; j++){
                    if (j ==  grid[i].size()-1 && i != grid.size()-1){
                        gridk[i+1][0] = grid[i][j];
                    }else if (j!=  grid[i].size()-1){
                        gridk[i][j+1] = grid[i][j];
                    }else{
                        gridk[0][0]= grid[i][j];
                    }
                }
            }
            k--;
        }
        return gridk;
    }
};
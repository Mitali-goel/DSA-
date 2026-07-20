class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
//BRUTTE FORCE     TC = O(m*n* k%(m*n))            SC = O(n)


    //     k = k % (grid.size() * grid[0].size());
    //    vector<vector<int>> gridk = grid ;
    //     while (k != 0){
    //        grid = gridk ;
    //         for (int i = 0 ; i < grid.size() ; i++){
    //             for(int j = 0 ; j < grid[i].size() ; j++){
    //                 if (j ==  grid[i].size()-1 && i != grid.size()-1){
    //                     gridk[i+1][0] = grid[i][j];
    //                 }else if (j!=  grid[i].size()-1){
    //                     gridk[i][j+1] = grid[i][j];
    //                 }else{
    //                     gridk[0][0]= grid[i][j];
    //                 }
    //             }
    //         }
    //         k--;
    //     }
    //     return gridk;




// OPTIMAL SOLUTION          TC = O(M*N)             SC  =O(N) 
// the intution behind this is circular array 
// we are using the concept of wraping back thats why using modulus 


    int index = 0 ; 
    int m = grid.size();
    int n = grid[0].size();
    k = k % (m*n);
    vector<vector<int>> result = grid ;

    for(int i = 0 ; i < grid.size() ; i++){
        for(int j = 0 ; j < grid[i].size() ; j++){
            index = ((i*n)+j +k) % (m*n) ;
            result[index/n][index%n] = grid[i][j];
        }
    }
    return result ;
    }
};
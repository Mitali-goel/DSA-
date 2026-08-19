class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        sort(reservedSeats.begin() , reservedSeats.end());
        int j = 1 ; int count = 0 ; int i = 0 ;
        int flag1 = 1 ; int flag2 = 1 ; int flag3 = 1;
        while ( i < reservedSeats.size()){
             if (reservedSeats[i][0] > j){
                if (flag1 == 1 && flag3 == 1){
                    count+= 2;
                }else if (flag1 == 1 || flag2 == 1){
                    count+= 1;
                }else if (flag2 == 1 || flag3 == 1){
                    count += 1 ;
                }
                j++;
                flag1 = 1; 
                flag2 = 1; 
                flag3 = 1; 
            }
            if (reservedSeats[i][0] == j){
                if (reservedSeats[i][1] >= 2 && reservedSeats[i][1] <= 5){
                    flag1 = 0 ;
                }if (reservedSeats[i][1] >= 4 && reservedSeats[i][1] <= 7){
                    flag2 = 0 ;
                }if (reservedSeats[i][1] >= 6 && reservedSeats[i][1] <= 9){
                    flag3 = 0 ;
                }
                i++;
            }
        }
        if (flag1 == 1 && flag3 == 1){
            count+= 2;
        }else if (flag1 == 1 || flag2 == 1){
            count+= 1;
        }else if (flag2 == 1 || flag3 == 1){
            count += 1 ;
        }
        while (j < n){
            count += 2;
            j++;
        }
        return count ;
    }
};
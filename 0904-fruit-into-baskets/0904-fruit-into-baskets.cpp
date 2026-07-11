class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // int maxFruit = 0 ; 
        // for (int i = 0 ; i < fruits.size() ; i++){
        //     int basket1 = -1 ; 
        //     int basket2 = -1 ; 
        //     for(int j = i ; j < fruits.size() ;j++){
        //         if (basket1 == -1){
        //             basket1 = fruits[j] ;
        //         }else if (fruits[j] != basket1 && basket2== -1){
        //             basket2 = fruits[j];
        //         }else if (fruits[j] != basket1 && fruits[j] != basket2){
        //             break ; 
        //         }
        //         maxFruit = max (maxFruit , j-i+1);
        //         if (j == fruits.size()-1)  return maxFruit ;
        //     }
        // }
        // return  maxFruit ;

    int l = 0 ; int r = 0 ; int maxFruits = 0 ; 
    int basket1 = -1 ; int basket2 = -1 ; 
    int prev1 = -1 ; int prev2 = -1 ; 
    while (r < fruits.size()){

        if (fruits[r] != basket2 && basket1 == -1){
            basket1 = fruits[r];
        }else if (fruits[r] != basket1 && basket2 == -1){
            basket2 = fruits[r];
        }if (fruits[r] == basket1){
            prev1 = r ; 
        }if (fruits[r] == basket2){
            prev2 = r ; 
        }
        if (basket1 != fruits [r] && basket2 != fruits [r] ){
            if (fruits[r-1] == basket2){
                l = prev1 +1 ; 
                basket1 = fruits [r] ;
                prev1 = r ; 
            }else {
                l = prev2+1 ; 
                basket2 = fruits [r] ;
                prev2 = r ; 
            }
        }
        maxFruits = max (maxFruits , r-l+1);
        r++;
    }
    return maxFruits ;
    }
};
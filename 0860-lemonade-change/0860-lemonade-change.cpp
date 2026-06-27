class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector <int> change ; int b = 0 ;
        int counter5 = 0 ; int counter10 = 0 ;
        while (b < bills.size()){ 
            if (bills[b] == 5){
               counter5++;
            }else if (bills[b] == 10){
                if (counter5 == 0)  return false ; 
                counter5--;
                counter10++;
            }else {
                if (counter5 == 0)  return false ; 
                if (counter10 != 0)  {
                    counter10--;
                    counter5--;
                }else if (counter5 < 3)  return false ;
                else   counter5 = counter5 - 3 ;
            }
        
            b++;
        }
        return true ; 
    }
};
class Solution {
public:
    int romanToInt(string s) {
        int num = 0 ; 
       
        for (int i = 0 ; i < s.size() ; i++){
            int j = i+1 ; 
            if(s[i] == 'C' && s[j] == 'M' ){
                num += 900 ; 
                i++;
            }else if (s[i] == 'C' && s[j] == 'D'){
                num += 400 ; 
                i++;
            }else if (s[i] == 'X' && s[j] == 'C'){
                num += 90;
                i++;
            }else if (s[i] == 'X' && s[j] == 'L'){
                num += 40;
                i++;
            }else if (s[i] == 'I' && s[j] == 'X'){
                num += 9;
                i++;
            }else if (s[i] == 'I' && s[j] == 'V'){
                num += 4;
                i++;
            }else if (s[i] == 'M'){
                num+= 1000 ; 
            }else if (s[i] == 'D'){
                num+= 500 ; 
            }else if (s[i] == 'C'){
                num+= 100 ; 
            }else if (s[i] == 'L'){
                num += 50 ; 
            }else if (s[i] == 'X'){
                num += 10 ; 
            }else if (s[i] == 'V'){
                num += 5 ; 
            }else if (s[i] == 'I'){
                num += 1 ; 
            }
        }
       return num ; 
    }
};
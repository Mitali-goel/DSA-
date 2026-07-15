class Solution {
public:
    string addBinary(string a, string b) {

        reverse (a.begin() , a.end());
        reverse (b.begin() , b.end());
        string result ;
        int i = 0 ; int j = 0 ;  int carry = 0;
        while (i < a.size() && j < b.size()){
            if (carry == 0){
                if (a[i] == '0' && b[j] == '0'){
                    result.push_back('0');
                }else if (a[i] == '0' && b[j] =='1'){
                    result.push_back('1');
                }else if (a[i] == '1' && b[j] == '0'){
                    result.push_back('1');
                }else {
                    carry = 1;
                    result.push_back('0');
                }
            }

            else if (carry == 1){
                if (a[i] == '0' && b[j] == '0'){
                    carry = 0 ;
                    result.push_back('1');
                }else if (a[i] == '0' && b[j] == '1'){
                    result.push_back('0');
                }else if (a[i] == '1' && b[j] == '0'){
                    result.push_back('0');
                }else {
                    result.push_back('1');
                }
            }

            i++;
            j++;
        }

        while(i < a.size()){
            if( carry == 0 ){
                result.push_back(a[i]);
            }else if (carry == 1 && a[i] == '0'){
                carry = 0 ; 
                result.push_back('1');
            }else if (carry == 1 && a[i] == '1'){
                result.push_back('0');
            }
            i++;
        }
         while(j < b.size()){
            if( carry == 0 ){
                result.push_back(b[j]);
            }else if (carry == 1 && b[j] == '0'){
                carry = 0 ; 
                result.push_back('1');
            }else if (carry == 1 && b[i] == '1'){
                result.push_back('0');
            }
            j++;
        }

        if (carry) {
            result.push_back('1');
        }
        reverse(result.begin() , result.end());
    return result ;
    }
};
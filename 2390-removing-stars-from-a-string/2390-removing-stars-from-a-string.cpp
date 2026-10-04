class Solution {
public:
    string removeStars(string s) {

//  space complexity o(1)  time complexity o(n + no of stars)        
        // int i = 0 ;
        // while(i < s.size()){
        //     if (s[i] == '*'){
        //         s.erase(i-1 , 2);
        //         i-- ; 
        //     }else{
        //         i++ ;
        //     }
        // }
        // return s ; 


// using stack       space complexity o(n)  time complexity o(n)
        stack<int> st ; 
        string result = "" ;
        for (int i = 0  ; i < s.size() ; i++){
            if (s[i] == '*'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            result +=  st.top();
            st.pop();
        }
        reverse(result.begin() , result.end());
        return result ;
    }
};
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string , string> mpp ; 
        for (int i = 0 ; i < knowledge.size() ; i++){
            mpp[knowledge[i][0]] = knowledge[i][1];
        }

        string result = "";
        for(int i = 0 ; i < s.size() ; i++){
            if (s[i] == '('){
                string key  = "" ;
                i++; 
                while (s[i] != ')'){
                    key += s[i];
                    i++;
                } 
                string value = ""; 
                if (mpp[key] != ""){
                    value = mpp[key];
                }
                else{
                    value = "?";
                }
                result += value ;
            }else {
                result += s[i];
            }

        }
        return result ;
    }
};
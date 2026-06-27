class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        // tc = O(NlogN) + O(NlogN) + O(N)
        // sc = O(1)
        
        sort (g.begin() , g.end()) ; sort (s.begin() , s.end());
        int S = s.size() ; int G = g.size();
        int s1 = 0 ; int g1 = 0 ; 
        while(s1 < S && g1 < G){
            if(s[s1] >= g[g1]){
                g1++;
            }
            s1++;
        }
        return g1; 
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) {
        // TWO POINTER 
    int maxarea = 0;
    int i = 0 ; int j = height.size()-1;
    int minheight = 0 ; 

    while (i<j){
        minheight = min(height[i] , height[j]);
        maxarea = max(maxarea , (j-i) * minheight );
        if(minheight == height[i]){
            i++;
        }else{
            j--;
        }
    }
    return  maxarea;
    }
};
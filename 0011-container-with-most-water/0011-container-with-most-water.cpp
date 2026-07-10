class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        // for (int i =0 ; i < height.size(); i++){
        //     for (int j =i+1 ; j < height.size() ; j++){
        //        maxarea  = max(maxarea, (j-i)* min(height[i] , height[j]));
        //     }
        // }


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
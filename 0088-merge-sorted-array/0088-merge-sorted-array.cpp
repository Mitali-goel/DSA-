class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    
    // int i = 0 ; int j = 0 ;
    // vector<int> result ; 
    // while(i<m && j<n){
    //     if(nums1[i] <= nums2[j]){
    //         result.push_back(nums1[i++]);
    //     }else {
    //         result.push_back(nums2[j++]);
    //     }
    // }

    // while(i<m){
    //     result.push_back(nums1[i++]);
    // }
    // while(j<n){
    //     result.push_back(nums2[j++]);
    // }

    // nums1 = result ; 
    // return ; 






        int i = 0 ; int j = 0 ; 
        while (i<m+n && j<n){
        if (nums1[i]>nums2[j]){
        
        for(int k = nums1.size()-1  ; k > i ; k--){
            nums1[k] = nums1[k-1];
        }
        nums1[i++] = nums2[j++];
        }else {
            i++ ; 
        }
        }
        if(j<n){
            for (int i = m + j ; i < nums1.size() ; i++){
                nums1[i] = nums2[j++];
            }
        }

    return ; 
   
    }
};
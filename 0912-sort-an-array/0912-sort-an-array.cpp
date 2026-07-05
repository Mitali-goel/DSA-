class Solution {
public:


// MERGE SORT    TC = O(nlogn)    SC = O(n)




    // void merge(vector<int> &nums , int low , int high){
    //     int mid = (low + high)/2 ;
    //     vector<int> temp ; 
    //     int left = low ; int right = mid+1 ; 
    //     while (left <= mid && right <= high){
    //         if (nums[left] <= nums[right]){
    //             temp.push_back(nums[left++]);
    //         }else{
    //             temp.push_back(nums[right++]);
    //         }
    //     }

    //     while(left<=mid){
    //         temp.push_back(nums[left++]);
    //     }
    //       while(right <= high){
    //         temp.push_back(nums[right++]);
    //     }
    //     for (int i = low ; i <= high ; i++){
    //         nums[i] = temp [i - low];
    //     }
        
    // }

    // void mergeSort(vector<int> &nums , int low , int high){
    //     if(low >= high)
    //         return ; 

    //         int mid = (low + high)/2 ;

    //         mergeSort(nums ,low , mid);
    //         mergeSort(nums , mid+1 , high);

    //         merge(nums , low , high);
    //         return ; 
        
    // }






// QUICK SORT       TC = O(nlogn)        SC = O(n)


int arrange (vector<int> &nums , int low , int high){

    int pivot = nums[low];
    int i = low ; 
    int j = high ; 
    while (i<j){
        while (nums[i] <= pivot  && i< high){
            i++;
        }
        while (nums[j] > pivot  && j > low){
            j--;
        }

        if(i<j) {
            swap(nums[i] , nums[j]);
        }
    }

    swap(nums[low] , nums[j]);
    return j ; 

}



 void quickSort(vector<int> &nums , int low , int high){
        if(low >= high)
            return ; 

            int pivotIndex = arrange(nums ,low , high);

            quickSort(nums, low , pivotIndex-1);
            quickSort(nums , pivotIndex+1 , high);

            return ; 
        
    }





    vector<int> sortArray(vector<int>& nums) {

        // mergeSort(nums , 0 , nums.size()-1);
        quickSort(nums , 0 , nums.size()-1);

        return nums ; 
        }
};
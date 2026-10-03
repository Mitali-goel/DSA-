class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
    // time complexity = O(n2)    
        // long long sum = 0 ;
        // for (int i = 0 ; i < nums.size() ; i++){
        //     int minel = nums[i] ; int maxel = nums[i];
        //     for(int j = i+1 ; j < nums.size() ; j++){
        //         maxel = max (maxel , nums[j]);
        //         minel = min (minel , nums[j]); 
        //         sum += (maxel - minel);
        //     }
        // }
        // return sum ; 


// time complexity = O(n)
        long long maxsum = 0 ; long long minsum = 0 ;
        int n = nums.size() ; 

        // to find sum of max 
        vector<int> nge(n , n) ;
        vector<int> pge(n ,-1) ;
        stack<int> s3 ; 
        stack<int> s4 ;

        for(int i = n - 1 ; i >= 0 ; i--){
            while(!s3.empty() && nums[s3.top()] <= nums[i]){
                s3.pop();
            }
            if(!s3.empty() && nums[s3.top()] > nums[i]){
                nge[i] = s3.top();
            }
            s3.push(i);
        }

        for(int i = 0 ; i < n ; i++){
            while (!s4.empty() && nums[s4.top()] < nums[i]){
                s4.pop();
            }
            if (!s4.empty() && nums[s4.top()] >= nums[i]){
                pge[i] = s4.top();
            }
            s4.push(i);
        }

        for(int i = 0 ; i < n ; i++){
            long long left = i - pge[i];
            long long  right = nge[i] - i ;
            maxsum += left * right * nums[i];
        }

        // to min sum of min 
        vector<int> nse (n,n);
        vector<int> pse (n,-1);
        stack<int> s1 ; 
        stack<int> s2 ; 
        
        for(int i =  n - 1 ; i >= 0 ; i--){
            while(!s1.empty() && nums[s1.top()] >= nums[i]){
                s1.pop();
            }
            if (!s1.empty() && nums[s1.top()] < nums[i]){
                nse[i] = s1.top();
            }
            s1.push(i);
        }

        for(int i = 0 ; i < n ; i++){
            while(!s2.empty() && nums[s2.top()] > nums[i]){
                s2.pop();
            }
            if (!s2.empty() && nums[s2.top()] <= nums[i]){
                pse[i] = s2.top();
            }
            s2.push(i);
        }

        for(int i = 0 ; i < n ; i++){
            long long  left = i - pse[i];
            long long  right = nse[i] - i ;
            minsum += left * right * nums[i]  ;
        }
        return maxsum - minsum ;
    }
};
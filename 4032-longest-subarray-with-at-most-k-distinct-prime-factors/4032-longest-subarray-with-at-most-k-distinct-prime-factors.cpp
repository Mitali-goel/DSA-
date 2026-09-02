class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {

        int maxel = *max_element(nums.begin() , nums.end());
        vector<int> spf (maxel+1 , 0);
        for(int i = 2 ; i < spf.size() ; i++){
            if(spf[i] != 0){
                continue;
            }else{
                spf[i] = i;
                for(int j = i ; j < spf.size() ; j += i){
                    if (spf[j] != 0){
                        continue;
                    }else{
                        spf[j] = i;
                    }
                }
            }
        }


        map<int ,int>mpp;
        int l = 0 ; int r = 0 ;
        int len = 0;
        while(r < nums.size()){
            int x = nums[r];
            while(x != 1){
                mpp[spf[x]]++;
                x = x/ spf[x];
            }
            

            while(mpp.size() > k && l < nums.size()){
                int y = nums[l];
                while(y != 1){
                    mpp[spf[y]]--;
                    if( mpp[spf[y]]==0){
                        mpp.erase(spf[y]);
                    }
                    y = y / spf[y];
                }
                l++;
            }
            len = max (len , r-l+1);
            r++;
        }
        return len ;
    }
};
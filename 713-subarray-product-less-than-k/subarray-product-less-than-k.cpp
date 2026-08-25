class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==1){
            if(nums[0]>=k){
                return 0;
            }
        }
        
        // Numbers positive hain , window Maintain karni hogi , 
        // left se kum karengein toa definately hamara product kum hoga so we need to shrink the window from left right .

        int i = 0;
        int cnt = 0;
        int product = 1 ;
        for(int j=0;j<n;j++){
            product*=nums[j];
            while(product>=k){
                product/=nums[i];
                i++;
            }
            // Har valid window kitni Subarrays Provide kar rahi hai ? j-i+1 right ?
            cnt+=j-i+1;
        }
       return cnt ;  
    }
};
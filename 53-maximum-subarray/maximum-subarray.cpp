class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

      // Har index pe hume decide karna hoga ki whether we want to continue the current sum or should I do a fresh start.
         int current_sum = 0;
         int fresh_start = 0;
         int maxi = -1e9;

         for(int i=0;i<n;i++){
            current_sum +=nums[i];
            fresh_start = nums[i];
            // we are updating current sum simply .
            current_sum = max(current_sum,fresh_start);
            maxi = max(current_sum,maxi); 
         }
         return maxi ;
    }
};
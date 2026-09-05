class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        int n = nums.size();
        int cur_max_sum = 0;
        int cur_min_sum = 0;
        int sum = 0;
        int maxi = -1e9;
        int mini = 1e9;

        for(int i=0;i<n;i++){
            int prev_cur_sum = cur_max_sum;
            cur_max_sum = max( prev_cur_sum+nums[i],max(cur_min_sum+nums[i],nums[i]) );

            cur_min_sum = min( prev_cur_sum+nums[i],min(cur_min_sum+nums[i],nums[i]) );

            maxi = max(maxi,cur_max_sum);
            mini = min(mini,cur_min_sum);   
        } 

        maxi = max(abs(maxi),abs(mini)); 
        return maxi ;
    }
};
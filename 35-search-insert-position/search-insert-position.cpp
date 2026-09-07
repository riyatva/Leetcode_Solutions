class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       
        int n = nums.size();
        int low = 0;
        int high = n-1;

        int ans = -1;
        
        while(low<=high){
            int mid = low + (high - low)/2 ; 
             if(nums[mid] == target){
                ans  = mid ;
                return ans ;
             }
             else if(nums[mid] > target){
                ans = mid ;
                high = mid-1;
             }
             else{
                low = mid + 1;
             }
        }
        // Manlo target itna bada hai ki kabhi ye condition nums[mid] > target hona chahiye na.
        if(ans == -1){
            ans = n;
        }

        return ans ;

    }
};
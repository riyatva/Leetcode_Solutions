class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low<high){
            int mid = low+(high-low)/2;
            // Thought process : Agar hum Dhalan par hai toa pakka ek peak aaya hoga hi.
            // Dhalan ko kaise likhte hain : nums[mid] > nums[mid+1]
            if(nums[mid] > nums[mid+1]){
                // ans toa store karo hi then left search space mein find out karo .
                ans = mid ;
                high = mid;
            }
            else{
                low = mid+1;
            }
        }

        if(ans == -1){
            ans = n-1;
        }
        return ans;
    }
};
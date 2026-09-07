class Solution {
public:

    int first_occur(vector<int>&nums , int target){
        int n = nums.size();
        int low = 0 ;
        int high = n-1;
        int ans = -1 ;
        while(low<=high){
            int mid = low + (high -low)/2;
            if(nums[mid] == target){
               ans = mid ;
               high = mid-1;
            }
            else if(nums[mid] > target){
                high = mid -1;
            }
            else{
                low = mid+1;
            }
         }
         return ans ;
    }

       int last_occur(vector<int>&nums , int target){
        int n = nums.size();
        int low = 0 ;
        int high = n-1;
        int ans = -1 ;
        while(low<=high){
            int mid = low + (high -low)/2;
            if(nums[mid] == target){
                ans = mid ;
                low = mid+1;
            }
            else if(nums[mid] > target){
               high = mid-1;
            }
            else{
                low = mid+1;
            }
         }
         return ans ;
    } 
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int>ans;
        int first_occ = first_occur(nums,target);
        int last_occ = last_occur(nums,target);
        ans.push_back(first_occ);
        ans.push_back(last_occ);

       return ans ;        
    }
};
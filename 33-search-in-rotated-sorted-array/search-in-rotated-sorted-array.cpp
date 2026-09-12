class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();

        int low = 0;
        int high = n-1;
        int ans = -1;

        while(low<=high){
            int mid = low + (high -low)/2 ;
            // Agar mid target ke barabar hai toa :
              if(nums[mid] == target){
                ans = mid ;
                return ans; 
              }
              // Agar nums[mid] , target ke barabar nhi hai toa dekho kaunsa part sorted hai.
              else if( nums[mid] >= nums[low]){
                   // Means left part is sorted , ab this is not necessary ki  hamara target uss sorted wale portion mein hi hoga .

                   if(target >= nums[low]  && target <= nums[mid]){
                       high = mid-1;
                   }
                   else{
                      low = mid + 1;
                   }
               }
               else{
                  if( target >= nums[mid] && target <= nums[high]){
                     low = mid + 1 ;
                  }
                  else{
                     high = mid - 1 ;
                  }      
               }
          }
       
        return ans;
    }
};
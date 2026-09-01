class Solution {
public:
    int maxProduct(vector<int>& nums) {
          
         int n = nums.size();
         
         int curr_max_prod = nums[0];
         int curr_min_prod = nums[0];
         int maxi = nums[0];

         // Har index pe hume ye maintain karna hai : what is the minimum product , maximum product or shall we start fresh.

         for(int i=1;i<n;i++){
              
           maxi = max({curr_max_prod*nums[i] , curr_min_prod*nums[i] , nums[i], maxi});
           int prev_max = curr_max_prod ;
           // Update curr_max_prod , curr_min_prod 
           curr_max_prod = max({curr_max_prod*nums[i],curr_min_prod*nums[i] , nums[i]});

           curr_min_prod = min({curr_min_prod*nums[i] ,prev_max*nums[i], nums[i]});
           
         }

         return maxi ; 
    }
};

//curr_min = minimum product of a contiguous subarray ending exactly at the previous/current index.

//curr_max = maximum product of a contiguous subarray ending exactly at the previous/current index .
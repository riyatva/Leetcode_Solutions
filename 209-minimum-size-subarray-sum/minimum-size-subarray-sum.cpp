class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {


      int n = nums.size();
      int sum = 0;
      int i = 0 ;
      int ans = 1e9;
 
      for(int j = 0;j<n;j++){
         sum+=nums[j];
         // jab tak sum is greater than target hai toa calculate karna hai hume .
         while(sum>=target){
             ans = min(ans,j-i+1);
             sum-=nums[i];
             i++;
         }
      }  
      if(ans == 1e9){
        ans = 0;
      } 
     return ans;
    }
};
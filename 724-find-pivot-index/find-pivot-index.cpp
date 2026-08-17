class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int n = nums.size();
         int sum = 0;
         for(auto it : nums){
            sum+=it;
         }
         //Calculating prefix and suffix sum in the same loop :
         // suffix[i] = sum + arr[i] - prefix[i]
         int left = 0;
         int right = 0;
         int ans = -1; 
         for(int i = 0;i<n;i++){
            left+=nums[i];
            right = sum + nums[i] - left;

            // To find Pivot index :
            if(left==right){
                ans = i;
                break;
            }
         }
       return ans ;    
    }
};
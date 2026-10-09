class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
         int n = nums.size();
         long long sum = 0;
         for(int i=0;i<n;i++){
           int maxi = nums[i];
           int mini = nums[i];
           int range = 0;
           for(int j=i+1;j<n;j++){
             maxi = max(maxi,nums[j]);
             mini = min(mini,nums[j]);
              range = maxi - mini; 

              sum+=range;
           }
         }
         return sum;
    }
};
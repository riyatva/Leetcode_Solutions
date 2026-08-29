class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int n = nums.size();

         // Change 0 to -1.
        for(int i=0;i<n;i++){
           if(nums[i] == 0){
             nums[i] = -1;
           }
        }

        // Q transformed to longest subarray with sum zero .
        int ans = 0;
        map<int,int>mp;
        int sum = 0;
        int maxi = -1e9 ;
        // Pehle 0 ka index -1 pe rakho .
        mp[0] = -1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            //map mein dhondho ki wo sum hai ya nahi .
            if(mp.contains(sum)){
                ans = i - mp[sum];
                maxi = max(ans,maxi);
            }
            // Agar kabhi sum nahi aaya toa phir map mein entry karo .
            else{
                mp[sum] = i;
            }
        }
        if(maxi == -1e9){
            maxi = 0;
        }
      return maxi ;    
    }
};
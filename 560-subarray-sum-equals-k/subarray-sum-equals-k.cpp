class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j = i;j<n;j++){
                sum+=nums[j];
                if(sum == k){
                    cnt++;
                }
            }
        }
       return cnt ;
    }
};


// Since n = 10^4 na so 10^8 operations are allowed.

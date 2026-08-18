class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
            int n = nums.size();
            map<int,int>mp;
            int left = 0;
            int cnt = 0;
            for(int i=0;i<n;i++){
              left+=nums[i];
              // Matlab ab tak ka sum = k toa cnt++ ho jaaygaa.
              // Nahi toa check karo left - k = prefix pehle kabhi aa chuka hai kya ?
              if(left == k ){
                cnt++;
              }
              if(mp.find(left-k)!=mp.end()){
                cnt+=mp[left-k];
              }
               mp[left]++;
            }
        return cnt;    
    }
};


// Since n = 10^4 na so 10^8 operations are allowed.

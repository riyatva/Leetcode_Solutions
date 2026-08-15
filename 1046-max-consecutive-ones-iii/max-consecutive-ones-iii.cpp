class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int n = nums.size();
        int i = 0;
        int ans = -1e9;
        map<int,int>mp;
        int one_freq = 0;
        
        for(int j = 0;j<n;j++){
            mp[nums[j]]++;
            if(nums[j] == 1){
                one_freq ++;
            }
            int wind_size = j-i+1;
            int replacements = wind_size - one_freq ;
            while(replacements > k){
                if(nums[i] == 1){
                    mp[nums[i]]--;
                    one_freq--;
                }
                i++;
                wind_size = j-i+1;
                replacements = wind_size - one_freq ;
            }
            ans = max( ans , wind_size);
        }

        return ans;
    }
};
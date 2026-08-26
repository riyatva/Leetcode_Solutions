class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int prefix = 0;
        map<int,int>mp;
        int cnt = 0;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            prefix +=nums[i];
            int ques = prefix - goal;
            if(mp.contains(ques)){
                cnt+=mp[ques];
            }
            mp[prefix]++;
        }
        return cnt;
    }
};
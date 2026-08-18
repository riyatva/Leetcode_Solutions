class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        map<int,int>mp;

        for(int i=0;i<n;i++){
            left+=nums[i];
            if(i>0 && left%k==0){
               return true;
            }
            int remainder = left%k;
            // As soon as remainder nikala turant check kar lengein ki wo rem pehle exist karta hai ya nahi ?
            if(mp.find(remainder) != mp.end()) {

             if(i - mp[remainder] >= 2) {
                 return true;
             }

           }
           else {
             mp[remainder] = i;
            }
       }

        return false;
    }
};
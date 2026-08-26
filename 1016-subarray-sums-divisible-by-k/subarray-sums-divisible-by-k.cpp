class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size(); 

        int prefix = 0;
        int cnt = 0;
        map<int,int>mp;
         mp[0] = 1;  

        for(int i=0;i<n;i++){
          prefix+=nums[i];
          //Jo abhi present s ka remainder aaya pehle remainder aa chuka hai ya nahi ? 
          int ques =  (prefix % k + k) % k ;
          ques = abs(ques);
          if(mp.contains(ques)){
            //cnt mein jitni baar wo remainder aa raha hoga utni baar add kar dengein. 
            cnt+=mp[ques];
          }
          mp[ques]++;
        }
     return cnt;
    }
};
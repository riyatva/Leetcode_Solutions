class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
         int n = nums.size();
         int cnt = 0;

        for(int i=0;i<n;i++){
            //even :
            if(nums[i] % 2 == 0){
               nums[i] = 0;
            }
            else{
                nums[i] = 1;
            }
        }     
        unordered_map<int,int>mp;

        int prefix = 0;
        mp[0] = 1;

        for(int i=0;i<n;i++){

           prefix = prefix + nums[i] ;
           int ques = prefix - k;

           if(mp.contains(ques)){
               cnt+=mp[ques];
           }
           mp[prefix]++;
        }     

      return cnt;    
    }
};